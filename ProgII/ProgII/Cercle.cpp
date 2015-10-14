#include "Cercle.h"

Cercle Cercle::operator = (const Cercle& c){

	r = c.r;

	return *this;
}

bool Cercle::operator==(const Cercle& c) const{

	bool ret=true;

	if (r == c.r){
		return ret;
	}
	else{
		return false;
	}
}

bool Cercle::operator!=(const Cercle& c) const{

	bool ret=true;
	
	if (r != c.r){
		return ret;
	}
	else{
		return false;
	}
}

const Cercle Cercle::operator+=(const Cercle& c){
	
	r = r + c.r;

	return *this;

}

const Cercle Cercle::operator -= (const Cercle& c){

	r = r - c.r;

	return *this;
}

Cercle Cercle::operator+(const Cercle& c) const{
	Cercle tmp;

	tmp.r = r + c.r;

	return tmp;
}

Cercle Cercle::operator-(const Cercle& c) const{

	Cercle tmp;

	tmp.r = r - c.r;

	return tmp;
}

float Cercle::getArea()const {

	float area;

	area=3.1415*r;

	return area;
}