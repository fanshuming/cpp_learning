#include "circle.h"
#include "point.h"

void Circle::setR(int r){
	this->r = r;
}

int Circle::getR(){
	return this->r;
} 

int Circle::getS(){
	return PI * (this->r) * (this->r);
}

bool Circle::isContainPoint(Point &point){
	if(point.getA() * point.getA() + point.getB() * point.getB() < (this->r) * (this->r)){
		return true;
	}else{
		return false;
	}
}
