#include "Tut5.h"
#include <iostream>

int main()
{
	Shape *ptrShape[10];

	ptrShape[0] = new Rectangle(10, 5);
	ptrShape[1] = new Triangle(10);
	ptrShape[2] = new Circle(9);
	ptrShape[3] = new Rectangle(10, 5); 
	ptrShape[4] = new Triangle(10);
	ptrShape[5] = new Circle(15);
	ptrShape[6] = new Rectangle(20, 25);
	ptrShape[7] = new Triangle(30);
	ptrShape[8] = new Circle(35);
	ptrShape[9] = new Rectangle(40, 45);

	for (int i = 0; i < 10; i++)
	{
		
		ptrShape[i]->name();
		ptrShape[i]->area();
		ptrShape[i]->perimeter();
		ptrShape[i]->draw();
	}

	for (int i = 0; i < 10; i++)
	{
		delete ptrShape[i];
	}

	system("PAUSE");
	return 0;
}
