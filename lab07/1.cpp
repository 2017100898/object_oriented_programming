#include<iostream>
#include<string>
#include<vector>
using namespace std;

class User{

private:
	string id, password;
	
	
public:

	User() {

	}

	~User() {

	}

	void setId(string id) {
		this->id = id;
	}

	void setPwd(string password) {
		this->password = password;
	}

	string getId() {
		return this->id;
	}

	string getPwd(){
		return this->password;
	}
};


int main() {
	User user[3];
	string id, password, searchId, searchPassword;
	bool check;

	for (int i = 0; i < 3; i++) {
		cout << "======== " << (i + 1) << " ========" << '\n';
		cout << "id : ";
		cin >> id;

		for (int i = 0; i < 3; i++) {
			if (user[i].getId() == id) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << '\n';
				cout << "�����մϴ�.";
				exit(10);
			}
		}

		user[i].setId(id);
		cout << "password : ";
		cin >> password;
		user[i].setPwd(password);
		cout << "===================" << '\n' << '\n';
	}


	while (1) {
		//LogIn ����� ����, ID�� �����ᡱ �Է½� ���α׷� ����
		check = false;

		cout << "====== LogIn ======" << '\n';

		cout << "id : ";
		cin >> searchId;

		if (searchId == "����") {
			cout << "�����ϰڽ��ϴ�.";
			exit(100);
		}

		cout << "password : ";
		cin >> searchPassword;


		for (int i = 0; i < 3; i++) {
			if (user[i].getId() == searchId && user[i].getPwd() == searchPassword) {
				cout << "�α��� �Ǽ̽��ϴ�." << '\n';
				check = true;
			}
		}

		if (check == false)
			cout << "�߸��� ID�ų� Password �Դϴ�." << '\n';


		cout << "===================" << '\n' << '\n';

	}
}