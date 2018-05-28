#include "iostream"
#include <stdio.h>

using namespace std;

class A{
	public:
		virtual void print(){
			cout<<"This is A"<<endl;
		}
};

class C1:public A{
	public:
		virtual void print(){
			cout<<"This is C1"<<endl;
		}
};

class C2 : public A{
	public:
		virtual void print(){
			cout<<"This is C2"<<endl;
		}
};


int main(){
	A *c1 = new C1();
	c1->print();
	A *c2 = new C2();
	c2->print();

	delete c1;
	delete c2;
	
	getchar();
	return 0;
}
