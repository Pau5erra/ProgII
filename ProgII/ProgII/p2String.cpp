#include "p2String.h"
#include "string.h"

p2String::p2String(){
	capacity = 0;
	str = new char[capacity];
	str = '\0';
}

p2String::p2String(const p2String& string){ 

	capacity = strlen(string.c_str());
	str = new char[capacity + 1];
	strcpy_s(str, capacity, string.str);

}

p2String::p2String(const char* string){ 

	capacity = strlen(string);
	str = new char[capacity+1];
	strcpy_s(str, capacity, string);

}

p2String::p2String(uint capacity){ 

	this->capacity = capacity; 

}

p2String::~p2String(){
	delete[] str;
}

const char* p2String::c_str() const{

	return str;

}

uint p2String::GetCapacity(const char* str) const{

	return strlen(str);

}

bool p2String::operator==(const char* string) const{

	if (strcmp(str, string) == 0){
		return true;
	}
	return false;
}

bool p2String::operator==(const p2String& string) const {

	if (strcmp(str, string.str) == 0){
		
		return true;
	}

	return false;
}

bool p2String::operator!=(const char* string) const{
	if (strcmp(str, string) != 0){
		return true;
	}
	return false;

}
bool p2String::operator!=(const p2String& string) const {

	if (strcmp(str, string.str) != 0){
		return true;
	}
	return false;
}

const p2String p2String::operator=(const char* string){
	for (int i = 0; i == strlen(string); i++){

		str[i] = string[i];
	}

	return *this;
}

const p2String p2String::operator=(const p2String &string){



	return *this;
}