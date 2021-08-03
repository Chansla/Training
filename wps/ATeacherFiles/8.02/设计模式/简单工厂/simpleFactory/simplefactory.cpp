#include <iostream>

using namespace std;

//1.设计一个抽象产品类----运算产品类
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

//设计简单工厂---根据客户的需求来设计不同的产品
class SimpleFactory {
private:
	static  OperatorProduct* dt; //定义静态产品类指针
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