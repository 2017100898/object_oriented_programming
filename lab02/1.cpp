#include<iostream>
using namespace std;

int get_num();
int sum(int x, int y);
int sub(int x, int y);
int mult(int x, int y);
float idiv(int x, int y);

int main() {
	int x, y;
	cout << "x 입력 : ";
	x = get_num();
	cout << "y 입력 : ";
	y = get_num();

	cout << "x + y = " << sum(x, y) << '\n';
	cout << "x - y = " << sub(x, y) << '\n';
	cout << "x * y = " << mult(x, y) << '\n';
	cout << "x / y = " << idiv(x, y) << '\n';
}

int get_num() {
	int num;
	cin >> num;
	return num;
}

int  sum(int x, int y) {
	return x + y;
}

int  sub(int x, int y) {
	return x - y;
}

int  mult(int x, int y) {
	return x * y;
}

float  idiv(int x, int y) {
	return float(x) / y;
}
