#include<iostream>
using namespace std;

class Train {

public:
	Train(): mPeople(0) {}
	Train(int people): mPeople(people){}
	~Train() {};

	virtual int station(int takeOff, int takeOn) {
		mPeople -= takeOff;
		mPeople += takeOn;
		return mPeople;
	}

protected:
	int mPeople; // ��� ��
};

class Ktx : public Train{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people){}
	~Ktx() {};

	// ������ ����� Ÿ�� ������ �Լ�
	int station(int takeOff, int takeOn) {
		mPeople -= takeOff;
		mPeople += takeOn;
		return mPeople;
	};

	int getPeople() {
		return mPeople;
	}
};


int main()
{
	Ktx k;
	int max = 0;
	int in, out;

	for (int i = 1; i <= 5; i++) {

		cout << i << "���� : ";
		cin >> out >> in;
		

		if (k.station(out,0) < 0) {
			cout << "�����̴��Դϴ�";
			return 0;
		}

		else if (k.station(0, in) > 300) {
			cout << "�����ʰ��Դϴ�.";
			return 0;
		}


		if (max < k.getPeople()) {
			max = k.getPeople();
		}
	}

	cout << "���� ���� ����� ž������ ���� ��� �� = " << max;
	return 0;
}
