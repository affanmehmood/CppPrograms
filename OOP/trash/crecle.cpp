#include<iostream>
using namespace std;
class circle
{
	public:
		float radius;
		float pie;
  		
   circle()
   {
   	radius = 0.0;
   	pie = 22/7;
   }
    
	cricle(float x)
	{
		
	}	
	
	float setarea();
	void getdata(float x, float y, float z);
	float setcircum();
	float setdiam();
	
	
};

float circle :: setarea()
 {
 	float x;
 	 cout<<"enter radius"<<endl;
	 cin>>radius;
	 x = pie*radius*radius;
 	 return x;
 }
 
 float circle :: setcircum()
 {
 	float x;
 	x = 2*pie*radius;
 	return x;
 }
 float circle :: setdiam()
 {
 	float x;
 	x = radius*2;
 	return x;
 }
 void circle :: getdata(float x, float y, float z)
 {
 	cout<<"the area of the circle is "<<endl<<x<<endl;
 	cout <<"circumfrance of the circle is "<<endl<<y<<endl;
 	cout<<"diameter of the circle is "<<endl<<z<<endl;
 }
 
 
int main()
 {
 	float x,y,z;
	circle c1;
 	x = c1.setarea();
    y=c1.setcircum();
    z=c1.setdiam();
 	c1.getdata(x,y,z);
 }
