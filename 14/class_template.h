#ifndef __CLASS_TEMPLATE_H__
#define __CLASS_TEMPLATE_H__

using std::cout;
using std::endl;

template <typename T1, typename T2>

class myClass{
	private:
		T1 I;
		T2 J;
	public:
		myClass(T1 a, T2 b); //constructor function
		void show();
};

// this is for constructor
// Be careful the format
template <typename T1, typename T2>
myClass<T1,T2>::myClass(T1 a, T2 b):I(a),J(b){}

//this void show();
template <typename T1, typename T2>

void myClass<T1, T2>::show()
{
	cout<<"I="<<I<<", J="<<J<<endl;
}

#endif
