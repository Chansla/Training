#pragma once
#include "MakeFactory.h"
#include "MakeTrain.h"
class TrainFactory :
    public MakeFactory
{
public:
    virtual Make* create_make();
};

