#include "OperationFactoryPlane.h"

Engine* OperationFactoryPlane::create_Engine()
{
    return new PlaneEngine;
}

Tyre* OperationFactoryPlane::create_Tyre()
{
    return new PlaneTyre;
}
