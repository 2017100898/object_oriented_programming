#include<iostream>
#include<vector>
using namespace std;

void vecChange(vector<int>& vec);

int main() {

	// vector ���� �� �ʱ�ȭ
	vector<int> v1(10);

	for (unsigned int i = 0; i < v1.size(); i++) {
		v1[i] = (i + 1);
	}

	cout << "�⺻ Vector �� :";
	cout << endl;
	for (unsigned int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}

	cout << endl;

	vecChange(v1);

	cout << "�Լ� ���� �� Vector �� :";
	cout << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
}

void vecChange(vector<int>& v1) {
	vector<int> v2(10);

	for (int i = 0; i < (v1).size(); i++) {
		v2[v1.size() - (i+1)] = (v1)[i];
	}

	for (int i = 0; i < (v1).size(); i++) {
		v1[i] = v2[i];
	}
}