#include<iostream>
using namespace std;

void startGame(int input[3], int answer[3]) {
	
	//매번 초기화
	int strike = 0;
	int ball = 0;

	//array 비교 후 맞은 만큼 출력
	for (int i = 0; i < 3; i++) {
		if (answer[i] == input[i])
			strike++;

		for (int j = 0 ; j <= 2; j++) {
			if (i!=j && answer[i] == input[j])
				ball++;
		}
	}

	//Strike, ball 모두 0 일 때
	if (strike != 0 || ball != 0)
		cout << strike<< " Strke, " << ball << " Ball" <<'\n' << '\n';

	//Strike, ball 모두 0 일 때
	else if(strike==0 && ball==0)
		cout<<"Out!!" <<'\n'<<'\n';

	//정답일 때 문구 출력 후 exit
	if (strike == 3) {
		cout << "정답입니다!";
		exit(100);
	}

}

int main() {
	int input[3];
	int answer[3];
	int number;

	//컴퓨터 숫자 선정
	for (int i = 0; i < 3; i++) {
		answer[i] = rand() % 9 + 1;
		cout << answer[i] << " ";
	}

	cout << '\n';

	//게임 시작 및 사용자
	for (int j = 0; j < 9; j++) {

		cout << "==================" << j + 1 << "==================" << '\n';
		cout << "1 ~ 9 범위의 숫자 세개를 입력해주세요 : ";

		for (int i = 0; i < 3; i++) {
			cin >> number;
			input[i] = number;
		}

		//중복값 예외 처리
		if (input[0] == input[1] || input[1] == input[2] || input[0] == input[2]) {
			cout << "중복된 숫자를 입력하셨습니다" << '\n';
			j -= 1;
			continue;
		}

		//범위 외 숫자 예외 처리
		else if (input[0]>9 || input[1] >9 || input[2] >9) {
			cout << "1 ~ 9 범위 내의 숫자를 입력해주세요." << '\n';
			j -=1;
			continue;
		}

		//범위 외 숫자 예외 처리
		else if (input[0] < 1 || input[1] <1 || input[2] <1) {
			cout << "1 ~ 9 범위 내의 숫자를 입력해주세요." << '\n';
			j -= 1;
			continue;
		}

		startGame(input, answer);
	}

	//for문 모두 돌고 패배시 출력
	cout << "패배했습니다." << '\n';
	cout << "정답은 "<< answer[0] << " " << answer[1] 
		 << " " << answer[2] << " " <<"입니다.";


	return 0;
}