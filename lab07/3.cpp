#include<iostream>
using namespace std;

class Account {
private:
	string name, id;
	int balance;

public:
	Account(string name, string id, int balance) {
		this->name = name;
		this->id = id;
		this->balance = balance;
	}

	string getId() {
		return this->id;
	}

	int getBalance() {
		return this->balance;
	}

	string getName() {
		return this->name;
	}

	Account operator+(Account a) {
		this->balance += a.balance;
		return *this;
	}

	Account operator-(Account a) {
		this->balance = 0;
		return *this;
	}

	friend ostream& operator<<(ostream& os, const Account& p);
};

ostream& operator << (ostream& out, const Account& p) {
	out << "학번: "<< p.id << " 이름: " << p.name << " 잔액: " << p.balance << '\n';
	return out;
}


int main() {
	string giveId, takeId;
	int giveIdNum, takeIdNum;
	bool error;

	Account acnt[3] = {
		Account("신은섭", "2015", 10000),
		Account("김유민", "2012", 0),
		Account("이강호", "2011", 5000),
	};

	while (1) {
		error = true;

		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> giveId;
		if (giveId == "종료") {
			cout << "종료합니다." << '\n';
			cout<< acnt[0] << acnt[1] << acnt[2];
			break;
		}

		
		for (int i = 0; i < 3; i++) {
			if (acnt[i].getId() == giveId) {
				error = false;
				giveIdNum = i;
			}
		}

		if (error == true) {
			cout << "보내는 학생의 학번이 존재하지 않습니다." << '\n';
			continue;
		}

		if (acnt[giveIdNum].getBalance() == 0) {
			cout << "보내는 학생의 잔액이 부족합니다." << '\n';
			continue;
		}

		error == true;
		cout << "돈을 받을 학생의 학번을 입력하세요: ";
		cin >> takeId;

		if (giveId == takeId)
			continue;

		for (int i = 0; i < 3; i++) {
			if (acnt[i].getId() == takeId) {
				error == false;
				takeIdNum = i;
			}
		}

		if (error == true) {
			cout << "받을 학생의 학번이 존재하지 않습니다." << '\n';
			continue;
		}
		

		acnt[takeIdNum] + acnt[giveIdNum];
		acnt[giveIdNum] - acnt[takeIdNum];
		cout << "보낸 학생의 잔액: ";
		cout << acnt[giveIdNum];
		cout << "받은 학생의 잔액: ";
		cout<< acnt[takeIdNum];
	}}