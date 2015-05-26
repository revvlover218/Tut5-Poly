#include "Tut5.h"
#include <iostream>
#include <math.h>

using namespace std;

Shape::Shape()
{
}

Shape::~Shape()
{
}

Circle::Circle(int r)
{
	radius = r;
}

Circle::~Circle()
{
}

void Circle::name()
{
	cout << "Circle: " << endl;
}

double Circle::perimeter()
{
	return 2 * (3.14*radius);
}

double Circle::area()
{
	return 3.14*radius*radius;
}

void Circle::draw()
{

}

Triangle::Triangle(int s)
{
	side = s;
}

Triangle::~Triangle()
{
}

void Triangle::name()
{
	cout << "Triangle: " << endl;
}

double Triangle::area()
{
	return sqrt(3) / 4 * side * side;
}

double Triangle::perimeter()
{
	return 3 * side;
}

void Triangle::draw()
{

}

Rectangle::Rectangle(int l, int b)
{
	length = l;
	breadth = b;
}

Rectangle::~Rectangle()
{

}

void Rectangle::name()
{
	cout << "Rectangle: " << endl;
}

double Rectangle::area()
{
	return length * breadth;
}

double Rectangle::perimeter()
{
	return (length * 2) + (breadth * 2);
}

void Rectangle::draw()
{
}