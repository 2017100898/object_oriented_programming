#include<iostream>
using namespace std;

int G(int x, int y);

int main() {
	int x, y;
	cin >> x;
	cin >> y;

	cout << "gcd( " << x << ", " << y << " ) = " << G(x, y) << endl;
}

int G(int x, int y) {
	while (x - y != y) {
		return G(y, abs(x - y));
	}
}