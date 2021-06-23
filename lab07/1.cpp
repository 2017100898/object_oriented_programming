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
				cout << "이미 존재하는 ID입니다." << '\n';
				cout << "종료합니다.";
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
		//LogIn 기능을 구현, ID에 “종료” 입력시 프로그램 종료
		check = false;

		cout << "====== LogIn ======" << '\n';

		cout << "id : ";
		cin >> searchId;

		if (searchId == "종료") {
			cout << "종료하겠습니다.";
			exit(100);
		}

		cout << "password : ";
		cin >> searchPassword;


		for (int i = 0; i < 3; i++) {
			if (user[i].getId() == searchId && user[i].getPwd() == searchPassword) {
				cout << "로그인 되셨습니다." << '\n';
				check = true;
			}
		}

		if (check == false)
			cout << "잘못된 ID거나 Password 입니다." << '\n';


		cout << "===================" << '\n' << '\n';

	}
}