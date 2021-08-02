#pragma once
#include "OperatorProduct.h"
class SubProduct :
    public OperatorProduct
{
    SubProduct(double num1, double num2, char op);

    double do_result();
};

