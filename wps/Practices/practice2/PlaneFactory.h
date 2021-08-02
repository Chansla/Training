#pragma once
#include "MakeFactory.h"
#include "MakePlane.h"
class PlaneFactory :
    public MakeFactory
{
public:
    virtual Make* create_make();
};

