#include<vector>
#include<iostream>
using namespace std;

template<typename T>
void sort(typename vector<T>& vec) {
	typename vector<T>::iterator iter1 = vec.begin();
	typename vector<T>::iterator iter2 = vec.begin() + 1;
	T temp1, temp2;
	for (iter1 = vec.begin(); iter1 != vec.end()-1; ++iter1) {
		for (iter2 = iter1+1; iter2 != vec.end(); ++iter2) {
			if (*iter1 > *iter2) {
				temp1 = *iter1;
				temp2 = *iter2;
				*iter1 = temp2;
				*iter2 = temp1;
			}
		}
	}
}

template<typename T>
void print(typename vector<T> vec) {

	typename vector<T>::iterator iter1 = vec.begin();
	for (iter1 = vec.begin(); iter1 != vec.end(); ++iter1) {
		cout << *iter1 << ", ";
	}
	cout << endl;
}

int main() {
	vector<int> int_list(5);
	int_list = { 10, 5, 8, 1, 3 };
	vector<double> double_list(5);
	double_list = { 10.1, 5.1, 8.1, 1.1, 3.1 };
	vector<string> string_list(5);
	string_list = { "�ϳ�", "��", "��", "��", "�ټ�" };
	//sort, print�Լ��� �Ű����� �����ε��� �ƴ� template�� Ȱ���Ͽ� ���弼��.
	//print�Լ��� iterator�� Ȱ���ϼ���
	sort(int_list);
	sort(double_list);
	sort(string_list);
	print(int_list);
	print(double_list);
	print(string_list);
}