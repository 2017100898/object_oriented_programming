#include<iostream>
using namespace std;

int fibonacci(int num) {

	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return fibonacci(num - 1) + fibonacci(num - 2);

}

int main()
{
	int n;
	int* p;
	cout << "n : ";
	cin >> n;

	p = new int[n];

	for (int i = 0; i < n; i++) {
		p[i] = fibonacci(i);
	}

	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}

	delete[] p;
	return 0;
}