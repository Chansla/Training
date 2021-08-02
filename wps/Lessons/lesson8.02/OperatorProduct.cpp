#include "OperatorProduct.h"

OperatorProduct::OperatorProduct()
	:num1(0)
	, num2(0)
	,opr(0)
{}

OperatorProduct::OperatorProduct(double n1, double n2, char op)
{
	this->num1 = n1;
	this->num2 = n2;
	this->opr = op;
}

OperatorProduct::~OperatorProduct()
{
}
