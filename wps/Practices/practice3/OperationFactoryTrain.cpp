#include "OperationFactoryTrain.h"

Engine* OperationFactoryTrain::create_Engine()
{
	return new TrainEngine;
}

Tyre* OperationFactoryTrain::create_Tyre()
{
	return new TrainTyre;
}
