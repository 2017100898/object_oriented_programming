#include<iostream>
#include<vector>
using namespace std;
using Matrix = vector<vector<int>>;

int main() {
	Matrix v1, v2;
	vector<int> miniv1, miniv2;
	int a, b, c, d;
	int num = 0;

	cout << "A의 행, 열의 크기를 입력해주세요 : ";
	cin >> a >> b;
	cout << "B의 행, 열의 크기를 입력해주세요 : ";
	cin >> c >> d;

	if (a * b * c * d == 0) {
		cout << endl<< "행렬을 생성할 수 없습니다." << endl;
		exit(100);
	}

	cout << endl << "A 행렬 : " << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			miniv1.push_back(rand() % 18 - 9);
		}
		v1.push_back(miniv1);
		miniv1.clear();
	}

	for (vector<int> miniv1 : v1) {
		for (int n : miniv1) {
			cout << n << "\t";
		}
		cout << endl;
	}

	cout << endl << "B 행렬 : " << endl;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			miniv2.push_back(rand() % 18 - 9);
		}
		v2.push_back(miniv2);
		miniv2.clear();
	}

	for (vector<int> miniv2 : v2) {
		for (int m : miniv2) {
			cout << m << "\t";
		}
		cout << endl;
	}

	if (b != c)
		cout << endl << "두 행렬을 곱할 수 없습니다." << endl;

	
	else {
		cout << endl << "AB곱행렬 : " << endl;


		for (unsigned int i = 0; i < a; i++) {
			for (unsigned int k = 0; k < d; k++) {
				for (unsigned int m = 0; m < c; m++)
					num += ((int)v2[m][k] * (int)v1[i][m]);
				cout << num << '\t';
				num = 0;
			}
			cout << endl;
		}
	}
}