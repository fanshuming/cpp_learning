#include "iostream"
#include <stdio.h>

using namespace std;

class A{
	public:
		A(){
			cout<<"A constructor"<<endl;
		}
		virtual ~A(){
			cout<<"A destructor"<<endl;
		}
		virtual void print(int a){
			cout<< a <<endl;
		}
	private:
		int b;
};

class C : public A{
	public:
		C(){
			cout<<"C constructor"<<endl;
		}
		virtual ~C(){
			cout<<"C destructor"<<endl;
		}
		virtual void print(int c, int b){
			cout<<c<<endl;
		}
};

int main(){
//	A *a = new C();
//	a->print(1);
	C c;
	c.A::print(2);
//	delete a;
	getchar();
}
