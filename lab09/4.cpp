#include<iostream>
using namespace std;

class Stack {
private:
	int* p_list;
	int size;
	int MAX_SIZE;

public:
	Stack(int _MAX_SIZE = 1000) {
		MAX_SIZE = _MAX_SIZE;
		p_list = new int[MAX_SIZE];
		size = 0;
	}

	~Stack() {
		delete[] p_list;
	}

	int find_index(int _item){
		bool check = false;

		for (int i = 0; i < size; i++) {
			if (p_list[i] == _item) {
				check = true;
				return i;
				break;
			}
		}

		if (check == false) {
			return -1;
		}
	}

	void push(int _item) {
		if (size < MAX_SIZE) {
			p_list[size] = _item;
			size++;
		}
		else {
			cout << "Error: out of memory" << '\n';
		}
	}

	int pop() {
		if (size > 0) {
			size--;
			return p_list[size+1];
		}
		else {
			cout << "Error: No item exists in the list" << '\n';
		}
	}

	void print() const {
		cout << "Items in the list : ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}

	int get_size() {
		return size;
	}

	int get_item(int _index) {
		return p_list[_index];
	}
	
	void operator +=(Stack& st) {
		for (int i = st.get_size()-1; i >= 0; i--) {
			if (find_index(st.p_list[i]) == -1) {
				this->push(st.p_list[i]);
			}
		}
	}

	bool operator ==(Stack& st) {
		bool check = true;

		if (st.get_size() == get_size()) {
			for (int i = 0; i < size; i++) {
				if (p_list[i] != st.p_list[i]) {
					check = false;
					break;
				}
			}
		}

		else {
			check = false;
		}

		return check;
	}
};


int main() {
	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s2.push(1);
	s2.push(2);
	s2.push(5);
	s1.print();
	s2.print();

	s1 += s2;
	s1.print();
	s2.print();

	cout << "s1 == s2 ? " << (s1 == s2) << endl;
	s1.pop(); // 5 out
	s1.pop(); // 3 out
	s2.pop(); // 5 out

	cout << "s1 == s2 ? " << (s1 == s2) << endl;
	s2.pop();
	s2.pop();
	s2.pop();


	return 0;
}