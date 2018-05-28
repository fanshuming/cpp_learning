#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class String{
	private:
		char * p;
		int length;
	public:
		String(const char * p){
			cout<<"in constructor function! "<<endl;
			this->length = strlen(p);
			this->p = (char *)malloc(this->length + 1);
			strncpy(this->p, p, this->length + 1);
		}

		String (const String &s){
			cout<<"in copy  constructor function! "<<endl;
			this->length = s.length;
			this->p = (char *)malloc(this->length + 1);
			strncpy(this->p, p, this->length + 1);
		}

		~String(){
			cout<<"in destructor function! "<<endl;
			free(this->p);
			this->p = NULL;
			this->length = 0;
		}
		char * toString(){
			return this->p;
		}
};

void test(){
	String s1 = "hello";
	String s2 = s1;
}

int main(){
	test();
	getchar();
	return 0;
}
