#ifndef TUT5_H
#define TUT5_H


class Shape
{

public:
	Shape();
	~Shape();

	virtual void name() = 0;
	virtual void perimeter() = 0;
	virtual void area() = 0;
	virtual void draw() = 0;
};

class Circle : public Shape
{

private:
	int radius;

public:
	Circle();
	~Circle();

	void name();
	void perimeter();
	void area();
	void draw();
};

class Triangle : public Shape
{

private:
	int side;

public:
	Triangle();
	~Triangle();

	void name();
	void area();
	void perimeter();
	void draw();
};

class Rectangle : public Shape
{

private:
	int length;
	int breadth;

public:
	void name();
	void area();
	void perimeter();
	void draw();
};
#endif