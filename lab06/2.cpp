#include<iostream>
#include<vector>
using namespace std;

class CStudent {
private:
	int number;
	string name;
	string major;
	vector<int> numbers;

public:
	CStudent() {
	}

	~CStudent() {
	}

	void Display() {
		cout << "학번 :" << this->number << endl;
		cout << "이름 :" << this->name << endl;
		cout << "전공 :" << this->major << endl;
		cout << endl;
	}


	void setNumber(int number) {
		this->number = number;
	}

	void setName(string name) {
		this->name = name;
	}

	void setMajor(string major) {
		this->major = major;
	}
};

int main() {

	CStudent s[3]; 

	int inputNumber; 
	string inputName, inputMajor; 
	int length = 0; 
	vector<int> vec;
	bool check;

	while (1) {

		check = false;

		cout << (length+1) << " 번째 학생 입력" << endl;
		cout << "학번 : ";
		cin >> inputNumber;
		cout << "이름 : ";
		cin >> inputName;
		cout << "전공 : ";
		cin >> inputMajor;


		for (int v : vec) {
			if (v == inputNumber) {
				check = true;
				cout << "※중복된 학번이 존재합니다" << '\n' << '\n';
			}
		}
		
		if (check == false) {
			vec.push_back(inputNumber);
			s[length].setNumber(inputNumber);
			s[length].setName(inputName);
			s[length].setMajor(inputMajor);
			length++;
			cout << "※입력 완료" << '\n' << '\n';
		}

		if (length >= 3) {
			break;
		}

	}

	cout << "----모든 입력이 완료되었습니다----" << '\n';

	for (int i = 0; i < length; i++) {
		cout << i + 1 << "학생정보" << endl;
		s[i].Display();
	}
	

	return 0;
}