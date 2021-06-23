#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream file1, file2;
	ofstream file3;
	file1.open("4-1.txt");
	file2.open("4-2.txt");
	file3.open("4-result.txt");

	while (!file1.eof()) {
		string str;
		getline(file1, str);
		file3 << str << endl;
	}

	file3 << endl;

	while (!file2.eof()) {
		string str;
		getline(file2, str);
		file3 << str << endl;
	}

	file1.close();
	file2.close();
	file3.close();
	return 0;
}