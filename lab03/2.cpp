#include<iostream>
using namespace std;

int main() {

	int n;
	int result = 0;

	cout << "number : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		result += i;
	}

	cout << result;
}