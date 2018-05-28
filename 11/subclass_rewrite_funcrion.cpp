#include "iostream"
#include <stdio.h>

using namespace std;

class A{
	public:
		int a;
	public:
		void print(){
			cout<<"this A print"<<endl;
		}
};

class B:public A{
	public:
		int a;
	public:
		void print(){
			cout<<"This B print"<<endl;
		}
};

int main(){
	B b;
	b.a = 1;
	b.print();
	b.A::a = 2;
	b.A::print();
	getchar();
	return 0;
}
