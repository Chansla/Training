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
		cout << "�ҿ�������𳵣�" << endl;	
	}

};


class MakePlane :public Make
{
public:
	void make()
	{
		cout << "�ҿ�������ɻ���" << endl;
	}

};




//���幤���ཫ�ͻ��˺;������������뽵����϶�
class Factory
{
private:
	static Make* m;
public:
	static Make* create_product(string something)
	{
		if (something == "train")
		{
			//Ϊm�ڶ�������ռ䣬����MakeTrain��
			m = new MakeTrain;

		}
		else if (something == "plane")
		{
			//Ϊm�ڶ�������ռ䣬����MakePlane��
			m = new MakePlane;
		}
		return m;
	}
};

//��̬�����ⲿ��ʼ��
Make* Factory::m = nullptr;


//�ͻ���
int main()
{
	Make* p = NULL;
	//�ͻ���Ҫ����ʲôֻ��Ҫ���߹���������
	p = Factory::create_product("train");
	p->make();
	delete p;

	p = Factory::create_product("plane");
	p->make();
	delete p;

	return 0;
}
