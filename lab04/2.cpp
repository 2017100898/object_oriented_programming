#include<iostream>
#include<string>
using namespace std;

void main() {
	string keyword;
	string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü����";
	int pos = 0, temp;
	string newdata;

	cout << "Ű���� : ";
	cin >> keyword;
	cout << "�˻���� : ";

	while ((temp = (int)data.find(",", pos)) != -1) {
		newdata = "";

		for (pos; pos < temp; pos++) {
			newdata += data[pos];
		}
		if (newdata.find(keyword, 0) != -1) {
			cout << newdata << "\t";
		}
		pos += 1;
	}

	newdata = "";
	for (pos; pos < data.size(); pos++) {
		newdata += data[pos];
	}
	if (newdata.find(keyword, 0) != -1) {
		cout << newdata << "\t";
	}
}