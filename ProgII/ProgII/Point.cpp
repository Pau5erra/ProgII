#include "Point.h"
#include <iostream>


const Point& Point::operator = (const Point& p){

	x = p.x;
	y = p.y;

	return *this;
}

bool Point::operator==(const Point& p)const{
	
	bool tmp1;

	if (x == p.x && y == p.y){
		tmp1 = true;
	}
	else{
		tmp1 = false;
	}
	return tmp1;
}

Point Point::operator + (const Point& p)const{

	Point tmp;

	tmp.x = x + p.x;
	tmp.y = y + p.y;

	return tmp;
}
Point Point::operator - (const Point& p)const{
	
	Point tmp;

	tmp.x=x - p.x;
	tmp.y=y - p.y;

	return tmp;
}
bool Point::operator != (const Point& p)const{
	bool tmp;

	if (x != p.x && y != p.y){
		tmp = true;
	}
	else{
		tmp = false;
	}
	
	return tmp;

}

const Point& Point::operator += (const Point& p){
	
	x = x + p.x;
	y = y + p.y;

	return *this;
}

const Point& Point::operator -= (const Point& p){

	x = x - p.x;
	y = y - p.y;

	return *this;
}

bool Point::isZero() const{
	bool tmp;

	if (x == 0 && y == 0){
		tmp = true;
	}
	else{
		tmp = false;
	}

	return tmp;
}

void Point::SetZero(){

	x = 0;
	y = 0;

}

const Point Point::Negate(Point& p){

	x = -x;
	y = -y;

	return *this;
}