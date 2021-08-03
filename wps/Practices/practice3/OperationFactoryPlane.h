#pragma once
#include "OperationFactory.h"
#include "PlaneEngine.h"
#include "PlaneTyre.h"

class OperationFactoryPlane :
    public OperationFactory
{
    virtual Engine* create_Engine();

    virtual Tyre* create_Tyre();
};

