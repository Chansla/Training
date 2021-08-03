#include <iostream>

using namespace std;

class singelton {
private:
	//˽��Ȩ���£��޷���������
	singelton() {
		;
	}

	static singelton* single;  //��ָ̬��,���������Ϣ
public:
	static singelton* get_instance();
};

//1.����ʽ�Ĺؼ�:���ഴ����ʱ��,�������ڴ�ռ�,��ʼ������
singelton* singelton::single = new singelton;

//2. ��֤�����ֻ��һ��,ֱ�ӷ��ض�Ӧ�Ŀռ�
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