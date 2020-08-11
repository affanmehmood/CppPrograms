#include<iostream>

using namespace std;

class Distance 
{
	int feet;
	
	float inches;
	
	public :
		
	Distance()
	{
		feet=0;
		inches=0;
	}
	
	Distance(int x,float y)
	{
		feet=x;
		inches=y;
	}
	
	friend ostream &operator<<(ostream &output, Distance &D);
	
	friend istream &operator>>(istream &input, Distance &D);
};

 ostream &operator << (ostream &output, Distance &D)
 {
 	output<< "Feet Of The Object" << D.feet <<endl;
 	
 	output<< "inches Of The Object" << D.inches <<endl;
 	
 	
 }
 
    istream &operator>>(istream &input, Distance &D)
 {
 	cout<<"Enter The Feet "<<endl;
 	input>>D.feet;
 	
 	cout<<"Enter The Inches "<<endl;
 	input>>D.inches;
 	
 	
 }
 
int main ()
{
	Distance D1(2 , 3) , D2(3 , 2) , D3;
	
	cin>>D3;
	
	cout<<D1<<endl;
	
	cout<<D2<<endl;
	
	cout<<D3;
	
}
