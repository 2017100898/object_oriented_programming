#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> list{ 10, 20, 30, 40, 50 };
	int num; // ����� list�� ��

	while (1) {
		cout << "��� �� ������ �� : ";
		try {
			cin >> num;

			if (num > list.size())
				throw num;

			else {
				for (int i = 0; i < num; i++)
					cout << list[i] << " ";
				cout << endl;
			}
		}
		catch (int num) {
			num = list.size();
			for (int i = 0; i < num; i++)
				cout << list[i] << " ";
			cout << endl;
			cout << "index is out of range. Please try agin. " << endl;
		}

	}
	return 0;
}