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
	DynArray():capacity(BLOCK){  //Aqui a capacity li poso BLOCK i al fer aixó ja no el posa a 0

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
		
		if(capacity>=num_elem++)
		data[num_elem] = new_element;

	}

	uint Capacity() const{
		return capacity;
	}

	uint At() const{
		return num_elem;
	}

	tmp c_str() const{

		return data;
	}

	bool empty(){
		
		return (num_elem == 0);
		
	}

	void clear(){
		if (data != NULL){
			delete[] data;
			capacity = BLOCK;
			num_elem = 0;
			data = new tmp[BLOCK];
		}
	}

	const DynArray operator+=(const DynArray& new_array){
		if (capacity < num_elem + new_array.num_elem){
			delete[] data;
			capacity += new_array.capacity;
			data = new tmp[capacity];
		}
		strcat_s(data, capacity, new_array.data);

		return *this;
	}

	const DynArray prefix(const DynArray& new_array){
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

		return *this;
	}
};

#endif
//Dinamic array aixó surt a l'examen
//emtpy() ha de dir si la cadena esta buida o no
//clear() primer caracter de la cadena ha de ser /0
//prefix() lo mateix que el += però a davant
//c_str() que torni la cadena
//length() 