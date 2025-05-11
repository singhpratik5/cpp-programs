#include<iostream>
using namespace std;

class complex
{

		
	public :
		int real;
		int img;
		
		
friend ostream &operator<<(ostream &o ,complex &c1);
};

ostream &operator<<(ostream &o ,complex & c1)
	{
		o<<c1.real<<"+i"<<c1.img<<endl;
		return o;
	};
	
int main()
{
	complex c1(3,7);
	cout<<c1;
}
		
