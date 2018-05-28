#include "iostream"
#include <stdio.h>

using namespace std;

class Figer{
	public:
		virtual int getArea() = 0;
};

class Circle : public Figer{
	public:
		Circle(int a, int b){
			this->a = a;
			this->b = b;
		}
		virtual int getArea(){
			return 3.14 * this->a * this->b;
		}
	private:
		int a,b;
};


class Square : public Figer{
	public:
		Square(int a, int b){
			this->a = a;
			this->b = b;
		}
		virtual int getArea(){
			return a*b;
		}
	private:
		int a,b;
};

void printArea(Figer & figer){
	cout<<figer.getArea()<<endl;
}

int main(){
	Circle c(1,2);
	Square s(1,2);

	printArea(c);
	printArea(s);

	return 0;
}
