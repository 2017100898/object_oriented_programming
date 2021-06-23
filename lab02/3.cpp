#include<iostream>
using namespace std;

void print_DOB(int year = 2000, int month = 1, int day = 1);

int main() {

	print_DOB();

	int x, y, z;
	cout << "year 입력 : ";
	cin >> x;
	cout << "month 입력 : ";
	cin >> y;
	cout << "day 입력 : ";
	cin >> z;
	print_DOB(x, y, z);

	return 0;
}

void print_DOB(int year, int month, int day) {
	cout << "나의 생년월일은 " << year << "년 " << month << "월 " << day << "일 입니다. " << endl;
}