#pragma once
#include "Engine.h"
#include "Tyre.h"
class OperationFactory
{
public:
	virtual Engine* create_Engine() = 0;

	virtual Tyre* create_Tyre() = 0;
};