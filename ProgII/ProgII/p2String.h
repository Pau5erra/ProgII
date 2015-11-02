#ifndef _P2STRING_
#define _P2STRING_


typedef unsigned int uint;

class p2String{
	//LA capacitat no �s el tamany de la cadena, puc tenir una cadena de 2 i una capacitat de 2000000000
	//string ha de ser privat perqu� aixi no es pot fer delete string. o string=new... i fer un memory leak.
	//Aix� no pots posar un string m�s gran de la capacitat que t�.
	//Si estan privats:
	//Puc controlar mem�ria
private:

	char* str;
	uint capacity;

public:
	p2String();
	//constructor copia
	p2String(const p2String& string);
	//constructor c string
	p2String(const char* string);
	p2String(uint capacity);

	~p2String();

	//getter
	const char* c_str() const;
	uint GetCapacity(const char* str) const;

	//Operadors
	bool operator== (const char* string) const;
	bool operator==(const p2String& string) const;
	bool operator!= (const char* string) const;
	bool operator!=(const p2String& string) const;

	//assignaci�
	const p2String operator= (const char* string);
	const p2String operator= (const p2String& string);

	//Fer l'operador d'assignaci�. Comprovar si hi ha mem�ria. Si n'hi ha suficient copies
	//Si no n'hi ha suficient crear m�s mem�ria (new)
};



#endif