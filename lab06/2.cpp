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
		cout << "�й� :" << this->number << endl;
		cout << "�̸� :" << this->name << endl;
		cout << "���� :" << this->major << endl;
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

		cout << (length+1) << " ��° �л� �Է�" << endl;
		cout << "�й� : ";
		cin >> inputNumber;
		cout << "�̸� : ";
		cin >> inputName;
		cout << "���� : ";
		cin >> inputMajor;


		for (int v : vec) {
			if (v == inputNumber) {
				check = true;
				cout << "���ߺ��� �й��� �����մϴ�" << '\n' << '\n';
			}
		}
		
		if (check == false) {
			vec.push_back(inputNumber);
			s[length].setNumber(inputNumber);
			s[length].setName(inputName);
			s[length].setMajor(inputMajor);
			length++;
			cout << "���Է� �Ϸ�" << '\n' << '\n';
		}

		if (length >= 3) {
			break;
		}

	}

	cout << "----��� �Է��� �Ϸ�Ǿ����ϴ�----" << '\n';

	for (int i = 0; i < length; i++) {
		cout << i + 1 << "�л�����" << endl;
		s[i].Display();
	}
	

	return 0;
}