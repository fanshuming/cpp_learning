#include "iostream"
#include "stdlib.h"
#include <stdio.h>

using namespace std;

class T{
	private:
		int a;
	public:
		T(int a){
			this->a = a;
			cout<<"in constructed function"<<endl;
		}

		T(const T & t){
			this->a = t.a + 1;
			cout<<"in copy constructed function!"<<endl;
		}
		~T(){
			cout<<this->a<<endl;
			cout<<"in destructor function !"<<endl;
		}
};

T newT(){
	T t(1);
	return t;
}

void test(){
	T t(3);
	t = newT();
}

int main(){
	test();
//	system("pause"); // in windows
	getchar();
	return 0;
}
