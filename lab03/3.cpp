#include<iostream>
using namespace std;

int main() {

	int n;
	int result = 0;

	cout << "number : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0 && i % 3 != 0) {
			result += i;
		}
	}

	cout << "sum : " << result;
}