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
	cout << x << "은 ";
	if (x % 2 == 0) {
		cout << "짝수입니다." << endl;
	}
	else
		cout << "홀수입니다." << endl;
}