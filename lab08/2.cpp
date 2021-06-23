#include<iostream>
using namespace std;

class Polygon {
public:
	Polygon() : mPoint(0), mLength(0) {}
	Polygon(int point, float length) : mPoint(point), mLength(length) {};
	~Polygon() {};

	virtual void calcGirth() {
		cout << "Girth : empty" << '\n';
	}

	virtual void calcArea() {
		cout << "Aree : empty" << '\n';
	}

protected:
	int mPoint; // 꼭지점 갯수
	double mLength; // 한 변의 길이
};


class Rectangle : public Polygon {
public:
	Rectangle() : Polygon() {}
	Rectangle(int point = 0, float length = 0) : Polygon(point, length) {}
	~Rectangle() {};

	void calcGirth() override {
		cout << "Girth : " << (mPoint) * (mLength) << '\n';
	}

	void calcArea() override {
		cout << "Aree : " << (mLength) * (mLength) << '\n';
	}
};

class Triangle : public Polygon {
public:
	Triangle() : Polygon() {}
	Triangle(int point = 0, float length = 0) : Polygon(point, length) {}
	~Triangle() {};

	void calcGirth() override {
		cout << "Girth : " << (mPoint) * (mLength) << '\n';
	}

	void calcArea() override {
		cout << "Aree : " << (sqrt(3)/4) * pow(mLength,2) << '\n';
	}
};


class Circle: public Polygon {
public:
	Circle() : Polygon() {}
	Circle(int point = 0, float length = 0) : Polygon(point, length) {}
	~Circle() {};

	void calcGirth() override {
		cout << "Girth : " << (mLength)*2*Pi << '\n';
	}

	void calcArea() override {
		cout << "Aree : " << pow(mLength,2) * Pi << '\n';
	}

private:
	const double Pi = 3.14;
};



int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();

	return 0;
}
