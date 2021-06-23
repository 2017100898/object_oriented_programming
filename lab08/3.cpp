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
	int mPeople; // 사람 수
};

class Ktx : public Train{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people){}
	~Ktx() {};

	// 기차에 사람이 타고 내리는 함수
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

		cout << i << "번역 : ";
		cin >> out >> in;
		

		if (k.station(out,0) < 0) {
			cout << "정원미달입니다";
			return 0;
		}

		else if (k.station(0, in) > 300) {
			cout << "정원초과입니다.";
			return 0;
		}


		if (max < k.getPeople()) {
			max = k.getPeople();
		}
	}

	cout << "가장 많은 사람이 탑승했을 때의 사람 수 = " << max;
	return 0;
}
