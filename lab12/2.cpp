#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> list;
	int ran = rand() % 100 + 1;

	// vector�� randomũ�⸸ŭ ä���
	for (int i = 0; i < ran; i++) {
		list.push_back(i);
	}

	int cnt = -1;
	while (1)
	{
		cnt++;
		try {
			list.at(cnt);
		}

		catch (exception& e) {
			cout << "���� list�� " << cnt << "�� ũ�⸦ ������ �ִ�";
			return 0;
		}
	}
	return 0;
}