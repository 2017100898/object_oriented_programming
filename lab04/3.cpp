#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int v1[10][10];
	ofstream file;
	file.open("3-result.txt");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			v1[i][j] = rand() % 101;
			file << v1[i][j] << " ";
		}
		file << endl;
	}

	file.close();
	return 0;
}