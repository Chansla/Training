#include <iostream>

using namespace std;

//1.设计一个抽象产品类----运算产品类
class OperatorProduct {
protected:
	double num1;
	double num2;
	char opr;
public:
	OperatorProduct() { ; }

	OperatorProduct(double n1, double n2, char op)
	{
		this->num1 = n1;
		this->num2 = n2;
		this->opr = op;
	}

	~OperatorProduct() { ; }

	//封装一个接口,让子类来实现它,以及后面调用.
	virtual double do_result() = 0;
};

//设计具体产品类---A类产品
class AddProduct : public OperatorProduct {
public:
	AddProduct(double n1, double n2, char op) :OperatorProduct(n1, n2, op) {
		;
	}

	double do_result() {
		return num1 + num2;
	}

};

//设计具体产品类---B类产品
class SubProduct : public OperatorProduct {
public:
	SubProduct(double n1, double n2, char op) :OperatorProduct(n1, n2, op) {
		;
	}

	double do_result() {
		return num1 - num2;
	}

};

//classs MulProduct : public OperatorProduct{;}

//设计抽象工厂----运算工厂类
class OperatorFactory {
public:
	virtual OperatorProduct * create_product(double num1, double num2, char opr) = 0;

};

//加法工厂---生成加法产品
class AddFactory : public OperatorFactory {
public:
	OperatorProduct * create_product(double num1, double num2, char opr)
	{
		return new AddProduct(num1, num2, opr);
	}

};

//加法工厂---生成加法产品
class SubFactory : public OperatorFactory {
public:
	OperatorProduct* create_product(double num1, double num2, char opr)
	{
		return new SubProduct(num1, num2, opr);
	}
};

//class MulFactory : public OperatorFactory{;}


int main()
{
	double n1;
	double n2;
	char opr;

	OperatorFactory* fy;
	OperatorProduct* dt;

	while (1)
	{
		cout << "please input expression : " << endl;
		cin >> n1 >> opr >> n2;

		switch (opr)
		{
		case '+':
			fy = new AddFactory;
			break;
		case '-':
			fy = new SubFactory;
			break;
		default:
			cout << "input error" << endl;
			return -1;
		}

		dt = fy->create_product(n1, n2, opr);

		cout << "result = " << dt->do_result() << endl;

		delete dt;
		dt = NULL;
	}

	return 0;
}