#include<iostream>
using namespace std;

void check(int x);

int main() {
	int x;

	while (1) {
		cout << "number : ";
		cin >> x;
		if (x != -1)
			check(x);
		else
			return 0;
	}
}

void check(int x) {
	cout << x << "�� ";
	if (x % 2 == 0) {
		cout << "¦���Դϴ�." << endl;
	}
	else
		cout << "Ȧ���Դϴ�." << endl;
}