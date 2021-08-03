#pragma once
#include "OperationFactory.h"
#include "TrainEngine.h"
#include "TrainTyre.h"

class OperationFactoryTrain :
    public OperationFactory
{
    virtual Engine* create_Engine();

    virtual Tyre* create_Tyre();
};

