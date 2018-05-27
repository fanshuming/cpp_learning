#include "iostream"

using namespace std;

class CirCle{

private:
	double m_s;
	double m_r;
	double m_c;

public:
	void setR(double r){
		this->m_r = r;
	}

	double  getR(){
		return this->m_r;
	}

	double getS(){
		return this->m_r * m_r * 3.14;
	}

	double getC(){
		return this->m_r * 2 * 3.14;
	}
	
};

int main()
{
	CirCle c1, c2;
	double r;

	cout<<"input the circle's radius:"<<endl;
	cin>>r;

	c1.setR(r);
	cout<<"the circle 1's area:"<< c1.getS() << endl;
	cout<<"the circle 1's perimeter:"<<c1.getC() << endl;

	return 0;
}
