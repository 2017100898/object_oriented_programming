#include <iostream>
using namespace std;

int main() {

	while (1) {
		int num;
		cout << "number : ";
		cin >> num;

		if (!(num >= 1 && num <= 9)) 
			return 0;

		else {
			for (int i = 1; i <= 9; i++)
				cout << num << "*" << i << " = " << num * i << ' ';
			cout << endl;
		}
	}
}