#include<iostream>
using namespace std;

class Polygon {
public:
	Polygon(): mPoint(0), mLength(0) {}
	Polygon(int point, float length): mPoint(point), mLength(length) {};
	~Polygon() {};

	virtual void calcGirth() {
		cout << "Girth : empty"<< '\n';
	}

	virtual void calcArea() {
		cout << "Aree : empty" << '\n';
	}

protected:
	int mPoint; // 꼭지점 갯수
	double mLength; // 한 변의 길이
};


class Rectangle : public Polygon{
public:
	Rectangle(): Polygon() {}
	Rectangle(int point = 0, float length = 0) : Polygon(point, length) {}
	~Rectangle() {};

	void calcGirth() override {
		cout << "Girth : " << (this->mPoint) * (this->mLength) << '\n';
	}

	void calcArea() override {
		cout << "Aree : " << (this->mLength) * (this->mLength) << '\n';
	}
};



int main()
{
	Polygon pol;
	Rectangle rec(4, 10);

	cout << "--- Polygon class ---" << endl;
	pol.calcGirth();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();

	return 0;
}
