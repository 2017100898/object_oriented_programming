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
		cout << "첫번째 x : ";
		cin >> n1;
		this->num1 = n1;
		cout << "첫번째 y : ";
		cin >> n2;
		this->num2 = n2;
		cout << "두번째 x : ";
		cin >> n3;
		this->num3 = n3;
		cout << "두번째 y : ";
		cin >> n4;
		this->num4 = n4;
	}

	void print() {
		cout << "두점 사이의 거리 = ";
		cout << (T)(sqrt(pow((num3 - num1), 2) + pow((num4 - num2), 2)));
	}


};

int main()
{
	// type에는 int, double, float 중 어느 것이든 들어갈 수 있다
	Point<double> p;
	// 두 점의 position을 입력 받는 함수
	p.setPointFromKeybord();
	// 두 점 사이의 거리를 출력하는 함수
	p.print();
	return 0;
}