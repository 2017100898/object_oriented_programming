#include<iostream>
#include<string>
using namespace std;

void main() {
	string keyword;
	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
	int pos = 0, temp;
	string newdata;

	cout << "키워드 : ";
	cin >> keyword;
	cout << "검색결과 : ";

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