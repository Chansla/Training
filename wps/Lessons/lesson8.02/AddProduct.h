#pragma once
#include "OperatorProduct.h"
class AddProduct :
    public OperatorProduct
{
public:
    AddProduct(double num1, double num2, char op);

    double do_result();
};

