#include "PlaneFactory.h"

Make* PlaneFactory::create_make()
{
    return new MakePlane;
}
