#ifndef TUT5_H
#define TUT5_H


class Shape
{

public:
	Shape();
	~Shape();

	virtual void name() = 0;
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual void draw() = 0;
};

class Circle : public Shape
{

private:
	int radius;

public:
	Circle(int);
	~Circle();

	void name();
	double perimeter();
	double area();
	void draw();
};

class Triangle : public Shape
{

private:
	int side;

public:
	Triangle(int);
	~Triangle();

	void name();
	double area();
	double perimeter();
	void draw();
};

class Rectangle : public Shape
{

private:
	int length;
	int breadth;

public:
	Rectangle(int, int);
	~Rectangle();

	void name();
	double area();
	double perimeter();
	void draw();
};
#endif