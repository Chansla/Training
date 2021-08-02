#include "Make.h"
#include "MakeFactory.h"
#include "TrainFactory.h"
#include "PlaneFactory.h"
#include <iostream>
using namespace std;

int main()
{
	Make* pt = nullptr;
	MakeFactory* fy = nullptr;
	string type;
	while (true)
	{
		cout << "Please input \"train\" or \"plane\" to make product : " << endl;
		cin >> type;
		if (type == "train")
		{
			fy = new TrainFactory;
		}
		else if (type == "plane")
		{
			fy = new PlaneFactory;
		}
		else
		{
			cout << "input error!" << endl;
			return -1;
		}

		pt = fy->create_make();
		pt->make();

		delete pt;
		delete fy;
		pt = nullptr;
		fy = nullptr;
	}
}