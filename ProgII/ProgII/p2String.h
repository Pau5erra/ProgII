#ifndef _P2STRING_
#define _P2STRING_

#include <iostream>

class p2String{
	//LA capacitat no és el tamany de la cadena, puc tenir una cadena de 2 i una capacitat de 2000000000
	//string ha de ser privat perquè aixi no es pot fer delete string. o string=new... i fer un memory leak.
	//Així no pots posar un string més gran de la capacitat que té.
	//Si estan privats:
	//Puc controlar memòria
private:
	char* str;
	uint capacity;
public:
	p2String(){ str = NULL; capacity = 0; };
	p2String(const p2String& string){ str = string.str; capacity = string.capacity; };
	p2String(char* string){ str = string; };
	p2String(uint _capacity){ capacity = _capacity; };

	~p2String(){};


	p2String c_str();

	//c_str() retorna la cadena que puc pusar a %s És com el getString()
	//Operadors == i !=
};

typedef unsigned int uint;

#endif