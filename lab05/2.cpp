#include <iostream>
#include <string>
using namespace std;

void change(string* str);

int main() {
	string str = "This is default value";
	cout << "�⺻�� ���> " << str << endl;
	change(&str);
	cout << "��ȯ�� �� ���> " << str << endl;
	return 0;
}void change(string* str) {	string newstr;	cout << "input> ";	cin >> newstr;	*str = newstr;}