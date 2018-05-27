#include "iostream"
#include "circle.h"
#include "point.h"

using namespace std;

int main(){
	Circle c;
	c.setR(2);

	Point p;
	p.setA(1);
	p.setB(1);

	if(c.isContainPoint(p))
	{
		cout<<"this point in the circle."<<endl;
	}	
}
