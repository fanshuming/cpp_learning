#include "iostream"
using namespace std;

class A{
	public:
		void printP(){
			cout<<"I am the fater object"<<endl;
		}
};

class B: public A{
	public:
		void printC(){
			cout<<"I am the sub object"<<endl;
		}
};

void parse(B & b){
	b.printP();
	b.printC();
}

void parse2(A * a){
	a->printP();
	//a->printC();
}

int main(){
	B b;
	b.printP();
	b.printC();
	A a = b;
	parse(b);
	parse2(&a);
}

