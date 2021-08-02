#include "TrainFactory.h"

Make* TrainFactory::create_make()
{
    return new MakeTrain;
}
