#include<iostream>
#include<cmath>
using namespace std;

template<typename T>
class Point {
private:
	int num1, num2, num3, num4;

public:
	Point() {}
	~Point() {}

	void setPointFromKeybord() {
		T n1, n2, n3, n4;
		cout << "ù��° x : ";
		cin >> n1;
		this->num1 = n1;
		cout << "ù��° y : ";
		cin >> n2;
		this->num2 = n2;
		cout << "�ι�° x : ";
		cin >> n3;
		this->num3 = n3;
		cout << "�ι�° y : ";
		cin >> n4;
		this->num4 = n4;
	}

	void print() {
		cout << "���� ������ �Ÿ� = ";
		cout << (T)(sqrt(pow((num3 - num1), 2) + pow((num4 - num2), 2)));
	}


};

int main()
{
	// type���� int, double, float �� ��� ���̵� �� �� �ִ�
	Point<double> p;
	// �� ���� position�� �Է� �޴� �Լ�
	p.setPointFromKeybord();
	// �� �� ������ �Ÿ��� ����ϴ� �Լ�
	p.print();
	return 0;
}