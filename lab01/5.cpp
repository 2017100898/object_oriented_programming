#include<iostream>
using namespace std;

int main() {
	int F;

	cout << "Please enter Fahrenheit value : ";
	cin >> F;

	cout << "Celsius value is " << (5.0 / 9.0) * (F - 32);

}