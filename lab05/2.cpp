#include <iostream>
#include <string>
using namespace std;

void change(string* str);

int main() {
	string str = "This is default value";
	cout << "기본값 출력> " << str << endl;
	change(&str);
	cout << "변환된 값 출력> " << str << endl;
	return 0;
}void change(string* str) {	string newstr;	cout << "input> ";	cin >> newstr;	*str = newstr;}