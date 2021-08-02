#pragma once
class OperatorProduct
{
protected:
	double num1;
	double num2;
	char opr;
public:
	OperatorProduct();
	OperatorProduct(double n1, double n2, char op);
	~OperatorProduct();
	virtual double do_result() = 0;
};

