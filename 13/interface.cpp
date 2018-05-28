#include "iostream"
#include <stdio.h>

using namespace std;

class Interface1{
	public:
		virtual int add(int a, int b) = 0;
		virtual void print() = 0;
};

class Interface2{
	public:
		virtual int mult(int a, int b) = 0;
		virtual void print() = 0;
};

class Parent{
	protected:
		int a;
		Parent(int a){
			this->a = a;
		}
		virtual int getA(){
			return this->a;
		}
};


class Child : public Parent, public Interface1, public Interface2{
	public:
		Child(int a):Parent(a){
			this->a = 2;
		}
		virtual int add(int a, int b){
			return a+b;
		}
		virtual int mult(int a, int b){
			return a*b;
		}
		virtual void print(){
			cout<<this->a<<endl;
		}
		virtual int getA(){
			return this->a;
		}
};

int main(){
	Interface1 *c1 = new Child(1);
	Interface2 *c2 = new Child(2);	

	cout<<c1->add(1,2)<<endl;
	cout<<c2->mult(1,2)<<endl;

	c1->print();
	delete (Child *)c1;
	delete (Child *)c2;

	getchar();
}
