#include "AddProduct.h"

AddProduct::AddProduct(double num1, double num2, char op)
	:OperatorProduct(num1, num2, op)
{
	;
}

double AddProduct::do_result()
{
	return num1 + num2;
}
