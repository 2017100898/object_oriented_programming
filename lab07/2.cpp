#include<iostream>
#include<cmath>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}

	~Point() {
	}

	void setPoint(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}

	int getX() {
		return this->x;
	}

	int getY() {
		return this->y;
	}

	Point operator-(Point p) {
		Point temp;
		temp.x = x - p.x;
		temp.y = y - p.y;
		return temp;
	}

	Point operator*(Point p) {
		Point temp;
		temp.x = x * p.x;
		temp.y = y * p.y;
		return temp;
	}
};

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;

	cout << "ù��° ��ǥ[x1, y1]�� �Է��ϼ��� : ";
	cin >> x1 >> y1;
	cout << "�ι�° ��ǥ[x1, y1]�� �Է��ϼ��� : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point(); //x,y�� 0���� �ʱ�ȭ

	/* �Ʒ��� ������ε� x, y�� ������ �����ؾ��մϴ�. */
	//pP1->setPoint(x1, y1);
	//pP1->setPoint(x2, y2);
	/***********************************************/
	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);
	/* pP3�� Ȱ���Ͽ� �Ÿ����� ���ϼ��� */
	int res = pP3->getX() + pP3->getY();
	cout << "�� ��ǥ ������ ���̴� " << pow(res, 0.5) << "�Դϴ�" << endl;;
	return 0;
}