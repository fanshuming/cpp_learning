#include "iostream"
using namespace std;

class A{
	public:
		void printA(){
			cout<<"A print"<<endl;
		}
};

class B{
	public:
		void printB(){
			cout<<"B print"<<endl;
		}
};

class C: public A, public B{
	public:
		void printC(){
			cout<<"C print"<<endl;
		}
};

int main(){
	C c;
	c.printA();
	c.printB();
	c.printC();
}
