#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student {
private:
	string name;
	int id;
	string depart;
	vector<string> subject;
	vector<char> grades;



public:
	Student() {
		this->name = "default";
		this->id = 0;
		this->depart = "depart";
	}

	Student(string name, int id, string depart) {
		this->name = name;
		this->id = id;
		this->depart = depart;
	}

	void setName(string name) {
		this->name = name;
	}

	void setID(int id) {
		this->id = id;
	}

	void setdpt(string depart) {
		this->depart = depart;
	}

	void print() {
		cout << this->name << " " << this->id << " " << this->depart << '\n';
	}

	void addGrade(string subject, char grade) {
		(this->subject).push_back(subject);
		(this->grades).push_back(grade);
	}

	void printGrades() {
		for (int i = 0; i < this->subject.size(); i++) {
			cout << this->subject[i] << " " << this->grades[i] << '\n';
		}

		getGPA();
	}

	void getGPA() {
		int result = 0;

		for (int i = 0; i < this->grades.size(); i++) {
			if (this->grades[i] == 'A')
				result += 4;
			else if (this->grades[i] == 'B')
				result += 3;
			else if (this->grades[i] == 'C')
				result += 2;
			else if (this->grades[i] == 'D')
				result += 1;
			else
				result += 0;
		}

		cout << "GPA : "<<(float)result / grades.size() <<'\n';
	}


	void getYear(int year) {
		string result;

		if (year - this->id/ 1000000 == 0) {
			cout << "Freshmen(1학년)" << '\n';
		}

		else if (year - this->id / 1000000  == 1) {
			cout << "Sophomore(2학년)" << '\n';
		}

		else if (year - this->id / 1000000 == 2) {
			cout << "Junior(3학년)" << '\n';
		}

		else if (year - this->id / 1000000  == 3) {
			cout << "Senior(4학년)" << '\n';
		}

		else {
			cout << "About to graduate(5학년)" << '\n';
		}

		
	}
};

int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	
	cout << "\n";


	Student ron;
	ron.print();
	cout << "\n";
	ron.setName("Ron");
	ron.setID(2014103959);
	ron.setdpt("EE");
	ron.print();
	
	ron.getYear(2019);
	ron.addGrade("Computer Architecture", 'B');
	ron.addGrade("Machine Learning", 'B');
	ron.addGrade("Computer Vision", 'C');
	ron.printGrades();
	
	return 0;
}

