#include<iostream>
using namespace std;

class Avengers
{
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}

	~Avengers() {}
	//캐릭터 설정 함수
	virtual void set(string _name, int _attack, int _defense, int _health){
		name = _name;
		attack_point = _attack;
		defense_point = _defense;
		health = _health;
	}

	//공격 함수
	virtual	int attack()
	{
		return attack_point;
	}

	//방어 함수
	virtual	void defense(int _attack_point){
		health -= (_attack_point)-defense_point;
	}

	//캐릭터 정보 출력 함수
	virtual void print_info()
	{
		cout << "Name : " << name << '\n';
		cout << "Attack_Point : " << attack_point << '\n';
		cout << "Defense_Point : " << defense_point << '\n';
		cout << "Health : " << health << '\n';
	}

protected:
	string name;//캐릭터 이름
	int attack_point;//공격력
	int defense_point;//방어력
	int health;//체력
};

class Character : public Avengers
{
public:

	void choose_chr(string name) {
		if (name == "IronMan")
			set("IronMan", 70, 40, 100);
		else if (name == "CaptainAmerica")
			set("CaptainAmerica", 60, 50, 100);
		else if (name == "Thor")
			set("Thor", 80, 30, 100);
	}

	int get_health() { return health; }
};

int main()
{
	Character my_char;
	Character enemy_char;
	string name;
	string chararr[3] = { "IronMan", "CaptainAmerica", "Thor" };
	int cnt = 0;

	cout << "Choose your character (IronMan, CaptainAmerica, Thor) : ";
	cin >> name;
	my_char.choose_chr(name);
	enemy_char.choose_chr(chararr[rand() % 3]);

	cout <<  "--My Character--" << endl;
	my_char.print_info();

	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();

	cout << endl << "--Battle--" << endl;

	while (1) {


		cout << "My Life: " << my_char.get_health() << "\t";
		cout << "Enemy Life:" << enemy_char.get_health() << endl;

		if (my_char.get_health() <= 0) {
			cout << "You Lose!";
			break;
		}

		else if (enemy_char.get_health() <= 0) {
			cout << "You Win!";
			break;
		}

		if (cnt % 2 == 0) {
			enemy_char.defense(my_char.attack());
		}
		
		else {
			my_char.defense(enemy_char.attack());
		}

		cnt++;
	
	}
	return 0;
}
