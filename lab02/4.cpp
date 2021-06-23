#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double x, y;
	cout << "x 입력 : ";
	cin >> x;
	cout << "y 입력 : ";
	cin >> y;

	cout << "sqrt(" << x<< ") equals "<< sqrt(x) << endl;
	cout << "exp(" << x << ") equals " << exp(x) << endl;
	cout << "log10(" << x << ") equals " << log10(x) << endl;
	cout << "cos(" << x << ") equals " << cos(x) << endl;
	cout << "pow(" << x << ", " << y << ") equals " << pow(x,y) << endl;
	cout << "fabs(" << x << ") equals " << fabs(x) << endl;

}