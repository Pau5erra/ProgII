#ifndef _DYNARRAY_
#define _DYNARRAY_
#include "Definitions.h"

#define BLOCK 20
template <class TYPE>

class DynArray{
private:
	uint capacity= BLOCK;
	uint num_elem=0;
	TYPE* data=NULL;

public:
	DynArray():capacity(BLOCK){  //Aqui a capacity li poso BLOCK i al fer aixó ja no el posa a 0

		data = new TYPE[BLOCK];

	}

	DynArray(const DynArray& new_array): num_elem(new_array.num_elem){

		capacity = MAX(BLOCK, new_array.num_elem);
		data = new TYPE[capacity];
		memcpy(data, new_array.data, new_array.num_elem*sizeof(TYPE));
	}
	
	//constructor reserva de memòria
	DynArray(uint new_capacity){//NO es pot fer const de uint
		if (capacity < new_capacity){

			capacity = new_capacity;

		}

		data = new TYPE[capacity];
	}

	~DynArray(){
		if (data != NULL){
			delete[] data;
		}
	}

	
	void PushBack(const TYPE& new_element){

		if (capacity < num_elem){

			TYPE* tmp = new tmp[capacity];
			data = new TYPE[capacity + BLOCK];
			memcpy(data, tmp, num_elem*sizeof(TYPE);
			delete[] tmp;

		}

		data[num_elem++] = new_element; //post increment, al passar la linea és quan s'incrementa

	}

	uint Capacity() const{
		return capacity;
	}

	uint Size() const{
		return num_elem;
	}

	TYPE& At(const uint& position)const{
	
		if (position > capacity){
			printf("Out of capacity");
		}
		return data[position];
	}

	bool empty() const{
		
		return (num_elem == 0);
		
	}

	void clear(){
		
			num_elem = 0;
			
	}

	const DynArray operator+=(const DynArray& new_array){
		if (capacity < num_elem + new_array.num_elem){
			delete[] data;
			capacity += new_array.capacity;
			num_elem += new_array.num_elem;
			data = new TYPE[capacity];
		}
		strcat_s(data, capacity, new_array.data);

		return *this;
	}

	const DynArray prefix(const DynArray& new_array){
		if (capacity < num_elem + new_array.num_elem){
			delete[] data;
			capacity += new_array.capacity;
			data = new TYPE[capacity];
		}
		else if (new_array.capacity < num_elem + new_array.num_elem){
			delete[] new_array.data;
			new_array.capacity += capacity;
			new_array.data = new TYPE[new_array.capacity];
		}
		strcat_s(new_array.data, capacity, data);
		memcpy(data, new_array.data, new_array.num_elem*sizeof(TYPE));

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