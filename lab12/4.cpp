#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

void writing() {

	ofstream fout("temp.txt");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			int number = rand() % 100 + 1;
			fout << number << " ";
		}
		fout << endl;
	}

	fout.close();
}

class FileNotFoundException : public exception {
	string message; // Identifies the exception and filename
public:
	FileNotFoundException(const string& fname) :
		message("File \"" + fname + "\" not found") {}
	FileNotFoundException() :
		message("\ninvalid vector<T> subscript") {}
	virtual const char* what() const throw () {
		return message.c_str();
	}
};


void reading(string name, int heng, int yeol) {
	ifstream fin(name);
	int number;

	if (!fin) {
		throw FileNotFoundException(name);
	}

	else {


		for (int i = 0; i < heng; i++) {

			if (i >= 10)
				throw FileNotFoundException();

			for (int j = 0; j < yeol; j++) {
				fin >> number;
				cout << number << " ";
			}

			for (int j = yeol; j < 10; j++) {
				fin >> number;
			}

			if (yeol > 10)
				throw FileNotFoundException();

				cout << endl;
			}
		}
	

	fin.close();
}

int main() {

	string name;
	int heng, yeol;
	int number;
	writing();

	cout << "파일 이름 : ";
	cin >> name;
	cout << "출력할 행 크기 : ";
	cin >> heng;
	cout << "출력할 열 크기 : ";
	cin >> yeol;

	try {
		reading(name, heng, yeol);
	}
	catch (std::exception& e) {
		cout << e.what() << '\n';
	}

}