#include<iostream>
#include<iomanip>
using namespace std;

class Student {
private:
	string name; //이름
	int id; //학번
	string department; //과
	int grade; //학년
	int credit; //이수학점

public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0) : name(n), id(i), department(d), grade(g), credit(c) {}
	/* Getter, Setter 함수를 구현해주세요 */
	/* 또한 virtual을 활용해서 print함수를 만들어주세요 */


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
		cout << "이    름 : " << getName() << '\n';
		cout << "학    번 : " << getId() << '\n';
		cout << "소속학과 : " << getDepartment() << '\n';
		cout << "학    년 : " << getGrade() << '\n';
		cout << "이수학점 : " << getCredit() << '\n';
		cout << "동아리명 : " << getClub() << '\n';
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
			return "연구조교";
		else
			return "교육조교";
	}
	
	double getRate() {
		return rate;
	}

	virtual void print() {
		cout << "=========================" << '\n';
		cout << "이    름 : " << getName() << '\n';
		cout << "학    번 : " << getId() << '\n';
		cout << "소속학과 : " << getDepartment() << '\n';
		cout << "학    년 : " << getGrade() << '\n';
		cout << "이수학점 : " << getCredit() << '\n';
		cout << "조교유형 : " << getType() << '\n';
		cout << "장학비율 : " << getRate() << '\n';
		cout << "=========================" << '\n';
	}

};

int main(void)
{
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	UnderGraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");
	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}