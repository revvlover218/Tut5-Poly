#include "Tut5.h"
#include <iostream>

int main()
{
	Shape *ptrShape[10];

	Rectangle R1(10, 15);
	Rectangle R2(20, 25); 
	Rectangle R3(30, 35);

	Triangle T1(40);
	Triangle T2(45);
	
	Circle C1(50);
	Circle C2(55);

	ptrShape[0] = &R1;
	ptrShape[1] = &T1;
	ptrShape[2] = &C1;
	ptrShape[3] = &R2;
	ptrShape[4] = &T2;
	ptrShape[5] = &C2;
	ptrShape[6] = &R3;
	
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
