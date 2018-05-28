#include <iostream>
#include <stdio.h>

using  std::cout;
using std::endl;

//using namespace std; //this template has been define in namespace std, so
//just use std::cout and std::endl 

template <class T>

T min(T x, T y)
{
	return (x<y)?x:y;
}

int main(){
	int n1 = 2, n2 = 10;
	double d1 = 1.5, d2 = 5.5;

	cout<<"min:"<<min(n1, n2)<<endl;
	cout<<"min:"<<min(d1, d2)<<endl;
	
	getchar();
	return 0;
}
