#include "Point.h"
#include <iostream>


Point Point::operator = (Point p){

	x = p.x;
	y = p.y;

	return *this;

}

bool Point::operator==(Point p)const{
	
	bool tmp1;

	if (x == p.x && y == p.y){
		tmp1 = true;
	}
	else{
		tmp1 = false;
	}
	return tmp1;
}

Point Point::operator + (Point p)const{

	Point tmp;
	tmp.x = x + p.x;
	tmp.y = y + p.y;

	return tmp;
}
Point Point::operator - (Point p)const{
	
	Point tmp;
	tmp.x=x - p.x;
	tmp.y=y - p.y;

	return tmp;
}
bool Point::operator != (Point p)const{
	bool tmp;

	if (x != p.x && y != p.y){
		tmp = true;
	}
	else{
		tmp = false;
	}
	
	return tmp;

}

Point Point::operator += (Point p){
	
	x = x + p.x;
	y = y + p.y;

	return *this;
}

Point Point::operator -= (Point p){

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

Point Point::Negate(Point p){

	x = -x;
	y = -y;

}