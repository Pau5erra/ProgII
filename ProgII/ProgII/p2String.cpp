#include "p2String.h"
#include "string.h"


p2String::p2String(const p2String& string){ 

	str = string.str; 
	capacity = string.capacity; 

}

p2String::p2String(const char* string){ 

	capacity = strlen(string);
	str = new char[capacity+1];
	strcpy(str, string);

}

p2String::p2String(uint capacity){ 

	this->capacity = capacity; 

}

const char* p2String::c_str() const{

	return str;

}

uint p2String::GetCapacity(const char* str) const{

	return strlen(str);

}

bool p2String::operator==(const p2String& string) const {
	return true;
}

bool p2String::operator!=(const p2String& string) const {
	return true;
}