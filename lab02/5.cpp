#include<iostream>
using namespace std;

int get_data(int& x, int& y);
int swap_call_by_value(int x, int y);
int swap_call_by_reference(int& x, int& y);

int main() {
	int x, y;
	get_data(x, y);
	cout << endl;

	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	swap_call_by_value(x, y);
	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << endl;

	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	swap_call_by_reference(x, y);
	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;


}

int get_data(int& x, int& y) {
	cout << "x �Է� : ";
	cin >> x;
	cout << "y �Է� : ";
	cin >> y;

	return x, y;
}

int swap_call_by_value(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

	return x, y;
}

int swap_call_by_reference(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

	return x, y;
}