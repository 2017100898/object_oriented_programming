#include<iostream>
using namespace std;

int main() {

	while (1) {
		string sen, sen2;

		cout << "���ڿ� �ϳ��� �Է����ּ��� : ";
		cin >> sen;

		auto compare = [](string sen) {
			string sen3;
			for (int i = sen.length() - 1; i >= 0; i--) {
				sen3 += sen[i];
			}
			return sen3;
		};

		
		sen2= compare(sen);
		cout << "�Է��Ͻ� ���ڿ��� ���� : ";
		cout << sen2 << endl;

		if (sen == sen2) {
			cout << "�� ���ڴ� ȸ���Դϴ�." << endl << endl;
		}

		else {
			cout << "�� ���ڴ� ȸ���� �ƴմϴ�." << endl << endl;
		}
	}
}