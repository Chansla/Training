#include <iostream>
#include <typeinfo>

using namespace std;
//妖怪类
class Monster {
public:
	Monster() {
		cout << "Monster coming" << endl;
	}

	Monster(const Monster& that)
	{
		cout << "monster coming" << endl;
	}

	virtual ~Monster() { ; }

	virtual Monster* clone() = 0; //定义克隆函数
};

class Sunwukong : public Monster {
public:
	Sunwukong() {
		cout << "Sunwukong coming" << endl;
	}
	Sunwukong(const Sunwukong &that) {
		cout << "Sunwukong coming" << endl;
	}

	virtual Monster* clone() {
		Sunwukong* p = new Sunwukong(*this);
		return p;
	}
};

class Zhubajie : public Monster {
public:
	Zhubajie() {
		cout << "Zhubajie coming" << endl;
	}
	Zhubajie(const Zhubajie& that) {
		cout << "Zhubajie coming" << endl;
	}

	virtual Monster* clone() {
		Zhubajie* p = new Zhubajie(*this);
		return p;
	}
};

int main()
{
	Monster* p = NULL;
	Monster* q = NULL;
	int n;

	while (1)
	{
		cout << "1-Sunwukong, 2-Zhubajie" << endl;
		cin >> n;

		switch (n)
		{
		case 1:
			p = new Sunwukong;
			break;
		case 2:
			p = new Zhubajie;
			break;

		default:
			cout << "input error" << endl;
			continue;
		}
		//克隆对象
		q = p->clone();
	}
	return 0;
}