#include<iostream>
using namespace std;

void startGame(int input[3], int answer[3]) {
	
	//�Ź� �ʱ�ȭ
	int strike = 0;
	int ball = 0;

	//array �� �� ���� ��ŭ ���
	for (int i = 0; i < 3; i++) {
		if (answer[i] == input[i])
			strike++;

		for (int j = 0 ; j <= 2; j++) {
			if (i!=j && answer[i] == input[j])
				ball++;
		}
	}

	//Strike, ball ��� 0 �� ��
	if (strike != 0 || ball != 0)
		cout << strike<< " Strke, " << ball << " Ball" <<'\n' << '\n';

	//Strike, ball ��� 0 �� ��
	else if(strike==0 && ball==0)
		cout<<"Out!!" <<'\n'<<'\n';

	//������ �� ���� ��� �� exit
	if (strike == 3) {
		cout << "�����Դϴ�!";
		exit(100);
	}

}

int main() {
	int input[3];
	int answer[3];
	int number;

	//��ǻ�� ���� ����
	for (int i = 0; i < 3; i++) {
		answer[i] = rand() % 9 + 1;
		cout << answer[i] << " ";
	}

	cout << '\n';

	//���� ���� �� �����
	for (int j = 0; j < 9; j++) {

		cout << "==================" << j + 1 << "==================" << '\n';
		cout << "1 ~ 9 ������ ���� ������ �Է����ּ��� : ";

		for (int i = 0; i < 3; i++) {
			cin >> number;
			input[i] = number;
		}

		//�ߺ��� ���� ó��
		if (input[0] == input[1] || input[1] == input[2] || input[0] == input[2]) {
			cout << "�ߺ��� ���ڸ� �Է��ϼ̽��ϴ�" << '\n';
			j -= 1;
			continue;
		}

		//���� �� ���� ���� ó��
		else if (input[0]>9 || input[1] >9 || input[2] >9) {
			cout << "1 ~ 9 ���� ���� ���ڸ� �Է����ּ���." << '\n';
			j -=1;
			continue;
		}

		//���� �� ���� ���� ó��
		else if (input[0] < 1 || input[1] <1 || input[2] <1) {
			cout << "1 ~ 9 ���� ���� ���ڸ� �Է����ּ���." << '\n';
			j -= 1;
			continue;
		}

		startGame(input, answer);
	}

	//for�� ��� ���� �й�� ���
	cout << "�й��߽��ϴ�." << '\n';
	cout << "������ "<< answer[0] << " " << answer[1] 
		 << " " << answer[2] << " " <<"�Դϴ�.";


	return 0;
}