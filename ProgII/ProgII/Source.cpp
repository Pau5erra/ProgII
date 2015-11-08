#include <iostream>
#include "Point.h"
#include "p2String.h"
#include "DynArray.h"

typedef unsigned int uint;
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

//Templates
template <class tmp>

void SwapTmp(tmp& a, tmp& b){
	tmp c = a;
	a = b;
	b = c;
}

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
	int _n;

	Base(int n){ _n = n; };
	virtual ~Base(){};

};

class Deriv{
public:
	int* numbers;

	Deriv(int i){ numbers = new int[i]; };

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
	/*
	Base* pclass = new Base(5); //dona error perquè el constructor de la classe base demana arguments

	Base a1(5);
	Base b1(a1); //copia a1 a b1
	
	if (b1._n == 5){

		printf("funciona");
	}
	*/

	//char* a = "Hola";
	//char* b = "Adios";
	
	/*
	iPoint a(5, 3);
	iPoint b(4, 2);
	SwapTmp(a, b);

	int c = 5;
	#include "asdf.h"
	#include "asdf.h"
	#include "asdf.h"
	printf("%d\n", c);
*/
	/*
	p2String a("hola");
	p2String b("mun");
	
	a=a+=b;
	*/
	/*
	int i = 5;
	int* data =new int[i];
	int* data2 = new int[i + i];

	memcpy(data2, data, sizeof(data));

	delete[] data2;
	*/
	/*
	int a = -1;

	++a;

	printf("%d", a);

	a++;

	printf("%d", a);
	
	if (1){ printf("holfasdfasd");
	}

	Base* b1 = new Deriv(10);

		
	delete b1;
		*/
	

	

	
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

