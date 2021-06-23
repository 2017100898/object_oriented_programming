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
	cout << "총 학생 수 입력: ";
	cin >> studentNum;
	Account* cls = new Account[studentNum + 1];
	
	for (int i = 0; i < studentNum; i++) {
		cout << i + 1 << "번째 학생 계좌 입력 : ";
		cout << "학번 : ";
		cin >> id;
		cout << '\n';
		cout << "이름 : ";
		cin >> name;
		cout << '\n';
		cout << "잔액 : ";
		cin >> balance;
		cls[i] = Account(id, name, balance);

		cout << '\n' << "===================" << '\n';
	}

	cout << "회수된 금액: ";
	cls->printRes();
	delete[] cls;
}

