#include "p2String.h"
#include "string.h"

p2String::p2String(){
	capacity = 0;
	str = new char[capacity];
	str = '\0';
}

p2String::p2String(const p2String& string){ 

	capacity = strlen(string.c_str())+1;
	str = new char[capacity ];
	strcpy_s(str, capacity, string.str);

}

p2String::p2String(const char* string){ 

	capacity = strlen(string)+1;
	str = new char[capacity];
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

uint p2String::Capacity() const{
	return capacity;
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
	
	if (capacity < strlen(string)){
		delete[] str;
		capacity = strlen(string);
		str = new char[capacity];
	}
	
	for (int i = 0; i == strlen(string); i++){

		str[i] = string[i];
	}
	
	return *this;
}

const p2String p2String::operator=(const p2String &string){

	uint new_capacity = string.Capacity();
	if (new_capacity > capacity){
		delete[] str;
		capacity = new_capacity;
		str = new char[capacity];
	}
	strcpy_s(str, capacity, string.str);

	return *this;
}

const p2String p2String::operator+=(const char* string){

	if (capacity < strlen(this->str) + strlen(string)){
		delete[] str;
		capacity += strlen(string);
		str = new char[capacity];
		
	}

	strcat_s(str, capacity, string);
	return *this;
}

const p2String p2String::operator+= (const p2String& string){

	uint new_capacity = Capacity() + string.Capacity();
	
	if(capacity < new_capacity){
		delete[] str;
		capacity += string.Capacity();
		str = new char[capacity];
	}

	strcat_s(this->str, capacity, string.str);

	return *this;
}

bool p2String::empty(){
	if (capacity == NULL){
		return true;
	}

	return false;
}

void p2String::clear(){
	if (capacity != NULL){
		str[0] = '\0';
	}
}

//Dinamic array aixó surt a l'examen
//emtpy() ha de dir si la cadena esta buida o no
//clear() primer caracter de la cadena ha de ser /0
//prefix() lo mateix que el += però a davant
//c_str() que torni la cadena
//length() 