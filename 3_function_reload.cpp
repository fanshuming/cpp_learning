#include "iostream"
using namespace std;

void test(int a)
{
	cout<<a<<endl;
}

void test(char a)
{
	cout<<a<<endl;
}

int main()
{
	test(1);
	test('a');
	return 0;
}
