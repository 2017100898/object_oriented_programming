#include<iostream>
using namespace std;

int main() {

	while (1) {
		string sen, sen2;

		cout << "문자열 하나를 입력해주세요 : ";
		cin >> sen;

		auto compare = [](string sen) {
			string sen3;
			for (int i = sen.length() - 1; i >= 0; i--) {
				sen3 += sen[i];
			}
			return sen3;
		};

		
		sen2= compare(sen);
		cout << "입력하신 문자열의 역순 : ";
		cout << sen2 << endl;

		if (sen == sen2) {
			cout << "이 문자는 회문입니다." << endl << endl;
		}

		else {
			cout << "이 문자는 회문이 아닙니다." << endl << endl;
		}
	}
}