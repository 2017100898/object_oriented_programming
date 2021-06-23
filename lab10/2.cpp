#include<iostream>
#include<vector>
using namespace std;


int main() {
	int min = 200;
	int max = 0;

	vector<int> vec1(10);
	vector<int>::iterator iter1 = vec1.begin();
	vector<int> vec2(10);
	vector<int>::iterator iter2 = vec2.begin();

	cout << "<vector 1>" << endl;
	for (iter1 = vec1.begin(); iter1 != vec1.end(); ++iter1) {
		*iter1 = rand() % 11;
		cout << *iter1 << " ";
	}
	cout << endl;
	cout << "<vector 2>" << endl;
	for (iter2 = vec2.begin(); iter2 != vec2.end(); ++iter2) {
		*iter2 = rand() % 21;
		cout << *iter2<< " ";
	}

	cout << endl << endl;
	for (iter1 = vec1.begin(); iter1 != vec1.end(); ++iter1) {
		for (iter2 = vec2.begin(); iter2 != vec2.end(); ++iter2) {
			if ((*iter1 * (*iter2)) < min)
				min = *iter1 * (*iter2);
			if ((*iter1 * (*iter2)) > max)
				max = *iter1 * (*iter2);
		}
	}

		cout << "ÃÖ´ñ°ª = " << max << '\n';
		cout << "ÃÖ¼Ú°ª = " << min << '\n';
}