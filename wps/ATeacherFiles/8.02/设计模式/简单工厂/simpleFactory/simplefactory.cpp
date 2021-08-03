#include <iostream>

using namespace std;

//1.���һ�������Ʒ��----�����Ʒ��
class OperatorProduct {
protected:
	double num1;
	double num2;
	char opr;
public:
	OperatorProduct(){ ; }

	OperatorProduct(double n1, double n2, char op)
	{
		this->num1 = n1;
		this->num2 = n2;
		this->opr = op;
	}

	~OperatorProduct() { ; }

	//��װһ���ӿ�,��������ʵ����,�Լ��������.
	virtual double do_result() = 0;
};

//��ƾ����Ʒ��---A���Ʒ
class AddProduct : public OperatorProduct {
public:
	AddProduct(double n1, double n2, char op) :OperatorProduct(n1, n2, op) {
		;
	}

	double do_result() {
		return num1 + num2;
	}

};

//��ƾ����Ʒ��---B���Ʒ
class SubProduct : public OperatorProduct {
public:
	SubProduct(double n1, double n2, char op) :OperatorProduct(n1, n2, op) {
		;
	}

	double do_result() {
		return num1 - num2;
	}

};

//��Ƽ򵥹���---���ݿͻ�����������Ʋ�ͬ�Ĳ�Ʒ
class SimpleFactory {
private:
	static  OperatorProduct* dt; //���徲̬��Ʒ��ָ��
public:
	static  OperatorProduct* create_product(double n1, double n2, char opr)
	{
		switch (opr)
		{
		case '+':
			dt = new AddProduct(n1, n2, opr);
			break;
		case '-':
			dt = new SubProduct(n1, n2, opr);
			break;
		}
		return dt;
	}

};

OperatorProduct* SimpleFactory::dt = NULL;

int main()
{
	double n1;
	double n2;
	char opr;
	OperatorProduct* op;

	while (1)
	{
		cout << "please input express : " << endl;
		cin >> n1 >> opr >> n2;

		op = SimpleFactory::create_product(n1, n2, opr);

		cout << "result = " << op->do_result() << endl;

		delete op;
		op = NULL;
	}
}