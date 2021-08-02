#include<iostream>
using namespace std;
class Make
{
public:
	virtual void make() = 0;
};


class MakeTrain :public Make
{
public:
	void make()
	{
		cout << "我可以制造火车！" << endl;	
	}

};


class MakePlane :public Make
{
public:
	void make()
	{
		cout << "我可以制造飞机！" << endl;
	}

};




//具体工厂类将客户端和具体的制造类分离降低耦合度
class Factory
{
private:
	static Make* m;
public:
	static Make* create_product(string something)
	{
		if (something == "train")
		{
			//为m在堆区申请空间，保存MakeTrain类
			m = new MakeTrain;

		}
		else if (something == "plane")
		{
			//为m在堆区申请空间，保存MakePlane类
			m = new MakePlane;
		}
		return m;
	}
};

//静态变量外部初始化
Make* Factory::m = nullptr;


//客户端
int main()
{
	Make* p = NULL;
	//客户想要制造什么只需要告诉工厂就行了
	p = Factory::create_product("train");
	p->make();
	delete p;

	p = Factory::create_product("plane");
	p->make();
	delete p;

	return 0;
}
