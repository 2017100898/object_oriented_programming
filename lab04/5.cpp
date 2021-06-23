#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	ifstream file1;
	ofstream file2;
	string strs = "";
	int leng;

	file1.open("5-1.txt");
	file2.open("5-result.txt");

	cout << "length = ";
	cin >> leng;

	if (file1.is_open() && file2.is_open()) {
		string str, strs;
		while (getline(file1, str)) {
			strs += (str+ " ");
		}

		for (unsigned i = 0; i < strs.length(); i += leng) {
			file2 << strs.substr(i, leng) << endl;
		}
	}

	file1.close();
	file2.close();
}