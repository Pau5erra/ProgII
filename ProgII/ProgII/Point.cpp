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

	 x + p.x;
	y + p.y;

	return *this;
}
Point Point::operator - (Point p)const{
	

	x - p.x;
	y - p.y;

	return *this;
}
bool Point::operator != (Point p)const{
	bool tmp;

	if (x != p.x && y != p.y)
	
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