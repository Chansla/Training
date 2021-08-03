#include "OperationFactory.h"
#include "OperationFactoryPlane.h"
#include "OperationFactoryTrain.h"

int main()
{
	OperationFactory* factory = new OperationFactoryTrain;
	Engine* engine = factory->create_Engine();
	engine->makeEngine();
	Tyre* tyre = factory->create_Tyre();
	tyre->makeTyre();

	cout << "--------------------" << endl;

	factory = new OperationFactoryPlane;
	engine = factory->create_Engine();
	engine->makeEngine();
	tyre = factory->create_Tyre();
	tyre->makeTyre();

	return 0;
}