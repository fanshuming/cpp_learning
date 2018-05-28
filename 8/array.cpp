#include "iostream"
#include "array.h"

Array::Array(int length){
	if(length < 0){
		length = 0;
	}
	this->space = new int[length];
	this->length = length;
}

Array::Array(const Array & array){
	this->space = new int[array.length];
	this->length = array.length;

	for(int i = 0; i<array.length; i++){
		(this->space)[i] = array.space[i];
	}
}

int Array::getLength(){
	return this->length;
}

void Array::setData(int index, int value){
	(this->space)[index] = value;
}

int Array::getData(int index){
	return (this->space)[index];
}

Array::~Array()
{
	if(this->space){
		delete [] this->space;
	}
}
