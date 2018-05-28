#include "iostream"
#include <stdio.h>

using namespace std;

class A{
	public:
		virtual void print(){
			cout<<"This A"<<endl;
		}
};

class C1 : public A{
	public:
		void print(){
			cout<<"This is C1"<<endl;
		}
};

class C2 : public A{
	public:
		void print(){
			cout<<"This is C2"<<endl;
		}
};

void func(A * c){
	c->print();
}

int main(){
	C1 *c1 = (C1*) new C1();
	C2 *c2 = (C2*) new C2();
	func(c1);
	func(c2);

	getchar();
	return 0;
}
