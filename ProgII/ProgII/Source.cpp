#include <iostream>
#include "Point.h"
/*
class Shape{
public:

	float x, y;
	virtual float getArea()const = 0;
};

class Box : public Shape{

public:

	float getArea() const{ 
	
		return (x*y);
	}

};

class Triangle : public Shape{

public:

	float getArea() const {
	
		return ((x*y) / 2);
	}
};*/
void Swap(int& a, int& b){//utilitza referències

	int c = a;
	a = b;
	b = c;


}
int main(){

	int a = 5;
	int b = 3;

	Swap(a, b);

	Point p2;


	/*
	Shape* s1 = new Triangle();
	Shape* s2 = new Box();

	s1->x = 3.0;
	s1->y = 3.0;

	s2->x = 3.0;
	s2->y = 3.0;

	printf("%f\n", s1->getArea());
	printf("%f\n", s2->getArea());*/

	system("PAUSE");
	return 0;
}

