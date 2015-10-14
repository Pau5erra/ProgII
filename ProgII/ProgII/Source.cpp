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

void Swap(float& a, float& b){//utilitza referències

	float c = a;
	a = b;
	b = c;


}

void Swap(char& a, char& b){//utilitza referències

	char c = a;
	a = b;
	b = c;

	

}

class Base{
public:
	char* characters;

	Base(int i){ characters = new char[i]; };
	virtual ~Base(){ delete characters; };

};

class Deriv : public Base{
public:
	int* numbers;

	Deriv(int i): Base(i){ numbers = new int[i]; };

	~Deriv(){ delete numbers; };

};
int main(){
	/*
	int a = 5;
	int b = 3;
	float c = 5.5;
	float d = 3.3;
	char e = 'B';
	char f = 'A';

	Swap(a, b);
	Swap(c, d);
	Swap(e, f);
	printf("Primer: %c, Despres %c/n", e, f);
	*/

	int a = -1;

	++a;

	printf("%d", a);

	a++;

	printf("%d", a);
	
	if (1){ printf("holfasdfasd");
	}

	Base* b1 = new Deriv(10);

		
	delete b1;
		
	

	

	
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

