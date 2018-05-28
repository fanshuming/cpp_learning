#include "iostream"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class T{
	private:
		int a;
	public:
		T(){
			cout<<"in T constructor"<<endl;
		}
		T(int a){
			this->a = a;
			cout<<"in parameter T constructor"<<endl;
		}
		T(const T & t){
			cout<<"in T copy constructor"<<endl;
		}
		~T(){
			cout<<"In T destructor function!"<<endl;
		}
};

class A {
	private:
		 T t;
		 T t2;
	public:
		A(){
			cout<<"In A constructor"<<endl;
		}
		A(int a1,int a2) : t(a1),t2(a2){
		        cout << "In A parameter constructor" << endl;
    		}

		~A(){
			cout<<"I A deconstructor function!" << endl;
		}
  		A(const A & a,int a1,int a2) :t(a1),t2(a2){
			cout<<"In parameter copy constructor function"<<endl;
    		}



};

int main()
{
	A a(2,1);
	getchar();
	return 0;
}
