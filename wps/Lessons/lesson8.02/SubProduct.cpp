#include "SubProduct.h"

SubProduct::SubProduct(double num1, double num2, char op)
	:OperatorProduct(num1, num2, op)
{
	;
}

double SubProduct::do_result()
{
	return num1 - num2;
}
