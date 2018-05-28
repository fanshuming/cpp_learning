#include "iostream"
using namespace std;

class A{
	friend class B;
	private:
		int a;
	public:
		int getData(){
			return this->a;
		}
};

class B{
	private:
		A ao;
	public:
		B(){
			ao.a = 1; //B is the friend class in A, so, it can directly call the A's attribute.
		}
		int getData(){
			return this->ao.a;	
		}
};


int main()
{
	B b;
	A ao;
	cout<<ao.getData()<<endl;
	cout<<b.getData()<<endl;

	return 0;
}
