#include<iostream>
#include<string>
using namespace std;

int main() {
	string A, B;
	int cnt = 0;

	cout << "�� �ܾ �Է����ּ��� : ";
	cin >> A >> B;

	for (int i = 0; i < A.length(); i++) {
		for (int j = 0; j < B.length(); j++) {
			if (A[i] == B[j]) {
				B[j] = ' ';
				cnt+=2;
				break;
			}
		}
	}

	cout << (A.length() + B.length()) - cnt;
}