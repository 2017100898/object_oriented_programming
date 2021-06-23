#include<iostream>
#include<cmath>
using namespace std;

void calculate(int* x);

int main() {
	int x;
	cout << "input> ";
	cin >> x;

	calculate(&x);

	cout << "Á¦°ö°ª> " << x;
}

void calculate(int* x) {
	*x= pow(*x,2);
}