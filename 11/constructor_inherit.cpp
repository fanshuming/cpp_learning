#include "iostream"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class A{
	private:
		int a;
	public:
		A(int a){
			this->a = a;
			cout<<this->a;
			cout<<"This the class A construct"<<endl;
		}
		~A(){
			cout<<"This is the A destructor"<<endl;
		}
};

class B: public A{
	public:
		B(int a):A(a), a1(2),a2(3){
			cout<<"This B constructor"<<endl;
		}
		~B(){
			cout<<"This B destructor"<<endl;
		}
	private:
		A a1;
		A a2;
};

class C: public B{
	public:
		C(int a):B(a), a1(4),a2(5){
			cout<<"This is C constructor"<<endl;
		}
		~C(){
			cout<<"This is C deconstructor"<<endl;
		}
	private:
		A a1;
		A a2;
};

int main()
{
	C c1(1);
	getchar();
	return 0;
}
