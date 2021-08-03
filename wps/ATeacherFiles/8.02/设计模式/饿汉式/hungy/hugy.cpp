#include <iostream>

using namespace std;

class singelton {
private:
	//私有权限下，无法创建对象
	singelton() {
		;
	}

	static singelton* single;  //静态指针,保存对象信息
public:
	static singelton* get_instance();
};

//1.饿汉式的关键:在类创建的时候,就申请内存空间,初始化对象
singelton* singelton::single = new singelton;

//2. 保证类对象只有一个,直接返回对应的空间
singelton* singelton::get_instance(){
	return single;
}

int main()
{
	singelton *s1 = singelton::get_instance();
	singelton* s2 = singelton::get_instance();

	if (s1 == s2)
	{
		cout << "s1 == s2" << endl;
	}
	else {
		cout << "s1 != s2" << endl;
	}
}