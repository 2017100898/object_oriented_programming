#include<iostream>
#include<vector>
using namespace std;

int main() {
	int number, element;

	while (1) {
		bool tf = true;

		cout << "Please enter number of values to process : ";
		cin >> number;

		int* arr = new int[number+1];

		if (number < 1)
			break;

		else {
			cout << "Please enter numbers : ";

			for (int i = 0; i < number; i++) {
				cin >> element;
				arr[i] = element;
			}

			for (int i = 0; i < number - 1; i++) {
				if (arr[i] > number) {
					tf = false;
					break;
				}

				else if (arr[i] < 1) {
					tf = false;
					break;
				}


				for (int j = i+1; j < number; j++) {
					if (arr[i] == arr[j]) {
						tf = false;
						break;
					}

				}
			}

		}

		if (tf == true)
			cout << "True" << '\n' << '\n';

		else
			cout << "False" << '\n' << '\n';


		delete[] arr;
	}

}