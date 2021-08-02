#include"Make.h"
#pragma once
class MakeFactory
{
public:
	virtual Make* create_make() = 0;
};

