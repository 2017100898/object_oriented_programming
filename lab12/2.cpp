#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> list;
	int ran = rand() % 100 + 1;

	// vector를 random크기만큼 채운다
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
			cout << "현재 list는 " << cnt << "의 크기를 가지고 있다";
			return 0;
		}
	}
	return 0;
}