#include<iostream>
using namespace std;

class CStudent {
private:
	int number;
	string name;
	string major;

public:
	CStudent() {
		number = 2018000000;
		name = "ȫ�浿";
		major = "��ǻ�Ͱ��а�";
	}

	CStudent(int number, string name, string major) {
		this->number = number;
		this->name = name;
		this->major = major;
	}

	~CStudent() {
	}

	void Display() {
		cout << "�й� :" << number  << endl;
		cout << "�̸� :" << name << endl;
		cout << "���� :" << major << endl;
		cout << endl;
	}

	void setNumber(int number) {
		this->number = number;
	}

	void setName(string name) {
		this->name = name;
	}

	void setMajor(string major) {
		this->major = major;
	}

	int getNumber() {
		return number;
	}

	string getName() {
		return name;
	}

	string getMajor() {
		return major;
	}

};

int main() {
	CStudent s1; // A
	s1.Display();

	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��"); // B
	s2.Display();

	// C
	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;
	
	return 0;
}