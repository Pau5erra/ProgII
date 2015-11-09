#ifndef _DYNARRAY_
#define _DYNARRAY_
#include "Definitions.h"

template <class tmp>

class DynArray{
private:
	uint capacity= 0;
	uint num_elem=0;
	tmp* data=NULL;

public:
	DynArray():capacity(BLOCK){  //Aqui a capacity li poso BLOCK i al fer aix� ja no el posa a 0

		data = new tmp[BLOCK];

	}

	DynArray(const DynArray& new_array): num_elem(new_array.num_elem){

		capacity = MAX(BLOCK, new_array.capacity);
		data = new tmp[capacity];
		memcpy(data, new_array.data, new_array.num_elem*sizeof(tmp));
	}


	~DynArray(){
		if (data != NULL){
			delete[] data;
		}
	}

	
	void PushBack(const tmp& new_element){
		
		if ()
		
		data[num_elem] = new_element;
	}
	
	bool empty(){
		if (capacity == NULL){
			return true;
		}

		return false;
	}

	void clear(){
		if (capacity != NULL){
			data[0] = '\0';
		}
	}

	void operator+=(const DynArray& new_array){
		if (capacity < num_elem + new_array.num_elem){
			delete[] data;
			capacity += new_array.capacity;
			data = new tmp[capacity];
		}
		strcat_s(data, capacity, new_array.data);
	}

	void prefix(const DynArray& new_array){
		if (capacity < num_elem + new_array.num_elem){
			delete[] data;
			capacity += new_array.capacity;
			data = new tmp[capacity];
		}
		else if (new_array.capacity < num_elem + new_array.num_elem){
			delete[] new_array.data;
			new_array.capacity += capacity;
			new_array.data = new tmp[new_array.capacity];
		}
		strcat_s(new_array.data, capacity, data);
		memcpy(data, new_array.data, new_array.num_elem*sizeof(tmp));
	}

	tmp c_str(){
		return data;
	}

	uint length(){
		return num_elem;
	}
	
};

#endif
//Dinamic array aix� surt a l'examen
//emtpy() ha de dir si la cadena esta buida o no
//clear() primer caracter de la cadena ha de ser /0
//prefix() lo mateix que el += per� a davant
//c_str() que torni la cadena
//length() 