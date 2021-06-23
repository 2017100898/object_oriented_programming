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
	out << "�й�: "<< p.id << " �̸�: " << p.name << " �ܾ�: " << p.balance << '\n';
	return out;
}


int main() {
	string giveId, takeId;
	int giveIdNum, takeIdNum;
	bool error;

	Account acnt[3] = {
		Account("������", "2015", 10000),
		Account("������", "2012", 0),
		Account("�̰�ȣ", "2011", 5000),
	};

	while (1) {
		error = true;

		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> giveId;
		if (giveId == "����") {
			cout << "�����մϴ�." << '\n';
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
			cout << "������ �л��� �й��� �������� �ʽ��ϴ�." << '\n';
			continue;
		}

		if (acnt[giveIdNum].getBalance() == 0) {
			cout << "������ �л��� �ܾ��� �����մϴ�." << '\n';
			continue;
		}

		error == true;
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
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
			cout << "���� �л��� �й��� �������� �ʽ��ϴ�." << '\n';
			continue;
		}
		

		acnt[takeIdNum] + acnt[giveIdNum];
		acnt[giveIdNum] - acnt[takeIdNum];
		cout << "���� �л��� �ܾ�: ";
		cout << acnt[giveIdNum];
		cout << "���� �л��� �ܾ�: ";
		cout<< acnt[takeIdNum];
	}}