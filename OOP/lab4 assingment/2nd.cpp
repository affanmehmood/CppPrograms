#include<iostream>
using namespace std;

class ROOM
{
	double width;
	public:
		
void setwidth(double);
friend  void printwidth(ROOM &o);
};

void ROOM :: setwidth(double x)
{
	width = x;
}
 void printwidth(ROOM &o)
{
	cout<<"width is "<<o.width<<endl;
}

int main()
{
	ROOM o1;
	o1.setwidth(10.10);
	printwidth(o1);
	
}
