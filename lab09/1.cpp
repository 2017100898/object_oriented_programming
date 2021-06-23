#include<iostream>
#include<iomanip>
using namespace std;

class Student {
private:
	string name; //�̸�
	int id; //�й�
	string department; //��
	int grade; //�г�
	int credit; //�̼�����

public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0) : name(n), id(i), department(d), grade(g), credit(c) {}
	/* Getter, Setter �Լ��� �������ּ��� */
	/* ���� virtual�� Ȱ���ؼ� print�Լ��� ������ּ��� */


	string getName() {
		return name;
	}

	int getId() {
		return id;
	}

	string getDepartment() {
		return department;
	}

	int getGrade() {
		return grade;
	}

	int getCredit() {
		return credit;
	}

	virtual void print() {
		cout << "I'm Student" << '\n' << '\n';
	}


};

class UnderGraduate : public Student {
private:
	string club;

public:
	UnderGraduate(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0, string cl = "default") : Student(n, i, d, g, c) {
		club = cl;
	};

	string getClub() {
		return club;
	}

	virtual void print() {
		cout << "=========================" << '\n';
		cout << "��    �� : " << getName() << '\n';
		cout << "��    �� : " << getId() << '\n';
		cout << "�Ҽ��а� : " << getDepartment() << '\n';
		cout << "��    �� : " << getGrade() << '\n';
		cout << "�̼����� : " << getCredit() << '\n';
		cout << "���Ƹ��� : " << getClub() << '\n';
		cout << "=========================" << '\n';
	}



};

class Graduate : public Student {
private:
	bool type;
	double rate;

public:
	Graduate(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0, bool t=false, double r=0.0) : Student(n, i, d, g, c) {
		type = t;
		rate = r;
	};

	string getType() {
		if (type == false)
			return "��������";
		else
			return "��������";
	}
	
	double getRate() {
		return rate;
	}

	virtual void print() {
		cout << "=========================" << '\n';
		cout << "��    �� : " << getName() << '\n';
		cout << "��    �� : " << getId() << '\n';
		cout << "�Ҽ��а� : " << getDepartment() << '\n';
		cout << "��    �� : " << getGrade() << '\n';
		cout << "�̼����� : " << getCredit() << '\n';
		cout << "�������� : " << getType() << '\n';
		cout << "���к��� : " << getRate() << '\n';
		cout << "=========================" << '\n';
	}

};

int main(void)
{
	Student Std;
	Graduate Kang("������", 2018311025, "��ǻ�Ͱ��а�", 1, 18, false, 0.5);
	UnderGraduate Hong("ȫ�浿", 20141111, "��ǻ�Ͱ��а�", 2, 80, "�˰��򵿾Ƹ�");
	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}