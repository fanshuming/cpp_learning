#include <iostream>
#include <stdio.h>
#include "class_template.h"

using std::cout;
using std::endl;

int main()
{
	myClass<int, int> class1(3,5);
	class1.show();

	myClass<int, const char *> class2(3,"a");
	class2.show();

	myClass<double, int> class3(2.1, 11);
	class3.show();

	getchar();

	return 0;
}
