#include<iostream>
using namespace std;


template <typename T>
class CList
{
public:
	CList();
	~CList();
	bool IsEmpty(); // list가 비어 있으면 1, 아니면 0
	bool IsFull(); // list가 꽉 차 있으면 1, 아니면 0
	void Add(T data); // list에 데이터 추가
	void Delete(T data); // list에 데이터 삭제
	void Print(); // list에 데이터 출력

private:
	T m_Array[5]; // 데이터를 저장할 공간
	int m_Length;// list에 있는 데이터 수
};

template <typename T>
CList<T>::CList() {
	m_Length = 0;
}

template <typename T>
CList<T>::~CList() {}

template <typename T>
bool CList<T>::IsEmpty() {
	if (CList<T>::m_Length == 0) {
		return 1;
	}
	else
		return 0;
}


template <typename T>
bool CList<T>::IsFull() {
	if (CList<T>::m_Length == 5) {
		return 1;
	}
	else
		return 0;
}

template <typename T>
void CList<T>::Add(T data) {
	if (IsFull() == 0) {
		m_Array[m_Length] = data;
		m_Length++;
	}
	else {
		cout << endl;
		cout << '\t' << "List is full." << endl;
	}
}

template <typename T>
void CList<T>::Delete(T data) {
	int check;

	if (IsEmpty() == 0) {
		for (int i = 0; i <m_Length; i++) {
			if (m_Array[i] == data) {
				check = i;
			}
		}

		for (int j = check; j < m_Length - 1; j++) {
			m_Array[j] = m_Array[j + 1];
		}

		m_Length--;
	}

	else {
		cout << '\t' << "List is empty." << endl;
	}
}

template <typename T>
void CList<T>::Print() {
	cout << endl;
	cout << "※ Current List " << endl;
	cout << " ";
	for (int i = 0; i < m_Length; i++) {
		cout << m_Array[i] << " ";
	}
	cout << endl;
}

int command()
{
	int num;
	cout << "\n\t---- menu ----" << endl;
	cout << "\t1. 리스트 추가" << endl;
	cout << "\t2. 리스트 삭제" << endl;
	cout << "\t3. 리스트 출력" << endl;
	cout << "\t4. 프로그램 종료" << endl;
	cout << "\n\t입력 --> ";
	cin >> num;
	return num;
}

int main()
{
	
	CList<int> list; // type형으로 list 선언
	int input; // list에 입력 할 데이터
	int com; // 선택한 기능
	while (1)
	{
		com = command(); // 기능을 선택
		switch (com)
		{

		case 1: // 추가
			cout << "\n추가할 데이터 : ";
			cin >> input;
			list.Add(input);
			break;

		case 2: // 삭제
			cout << "\n삭제할 데이터 : ";
			cin >> input;
			list.Delete(input);
			break;

		case 3: // 출력
			list.Print();
			break;

		case 4: // 프로그램 종료
			cout << "\n\t프로그램을 종료합니다\n";
			return 0;
			break;

		default:
			break;
		}
	}
	return 0;
}