#include<iostream>
using namespace std;


template <typename T>
class CList
{
public:
	CList();
	~CList();
	bool IsEmpty(); // list�� ��� ������ 1, �ƴϸ� 0
	bool IsFull(); // list�� �� �� ������ 1, �ƴϸ� 0
	void Add(T data); // list�� ������ �߰�
	void Delete(T data); // list�� ������ ����
	void Print(); // list�� ������ ���

private:
	T m_Array[5]; // �����͸� ������ ����
	int m_Length;// list�� �ִ� ������ ��
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
	cout << "�� Current List " << endl;
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
	cout << "\t1. ����Ʈ �߰�" << endl;
	cout << "\t2. ����Ʈ ����" << endl;
	cout << "\t3. ����Ʈ ���" << endl;
	cout << "\t4. ���α׷� ����" << endl;
	cout << "\n\t�Է� --> ";
	cin >> num;
	return num;
}

int main()
{
	
	CList<int> list; // type������ list ����
	int input; // list�� �Է� �� ������
	int com; // ������ ���
	while (1)
	{
		com = command(); // ����� ����
		switch (com)
		{

		case 1: // �߰�
			cout << "\n�߰��� ������ : ";
			cin >> input;
			list.Add(input);
			break;

		case 2: // ����
			cout << "\n������ ������ : ";
			cin >> input;
			list.Delete(input);
			break;

		case 3: // ���
			list.Print();
			break;

		case 4: // ���α׷� ����
			cout << "\n\t���α׷��� �����մϴ�\n";
			return 0;
			break;

		default:
			break;
		}
	}
	return 0;
}