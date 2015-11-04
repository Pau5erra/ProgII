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
		
		if ()
		
		data[num_elem] = new_element;


	}

};

#endif