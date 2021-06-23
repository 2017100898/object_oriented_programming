#include<iostream>
#include<cmath>
using namespace std;


int box[20][20] = { 0 };

void mabangjin(int number) {
    int x = 0, y = number / 2;

    for (int i = 1; i <= pow(number, 2); i++) {
        box[x][y] = i;

        if (i % number == 0)
            x = x + 1;

        else {
            x = x - 1;
            y = y + 1;
        }

        if (x < 0)
            x = number - 1;

        if (y > number - 1)
            y = 0;

    }

    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

	int n;
	cout << "홀수 숫자를 하나 입력해 주세요 : ";
	cin >> n;
    mabangjin(n);
}

