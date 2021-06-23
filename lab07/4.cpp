#include<iostream>
using namespace std;

class Account {
private:
	string name, id;
	int balance;
	
public:
	static int result;

	Account() {
		this->id = "0";
		this->name = "0";
		this->balance = 0;
	}
	
	Account(string id, string name, int balance) {
		this->id = id;
		this->name = name;
		this->balance = balance;
	}
	
	~Account() {
		result += this->balance;
	}

	void printRes() {
		cout << result;
	}

};

int Account::result = 0;


int main() {
	int studentNum, balance;
	string id, name;
	cout << "�� �л� �� �Է�: ";
	cin >> studentNum;
	Account* cls = new Account[studentNum + 1];
	
	for (int i = 0; i < studentNum; i++) {
		cout << i + 1 << "��° �л� ���� �Է� : ";
		cout << "�й� : ";
		cin >> id;
		cout << '\n';
		cout << "�̸� : ";
		cin >> name;
		cout << '\n';
		cout << "�ܾ� : ";
		cin >> balance;
		cls[i] = Account(id, name, balance);

		cout << '\n' << "===================" << '\n';
	}

	cout << "ȸ���� �ݾ�: ";
	cls->printRes();
	delete[] cls;
}

