#include<iostream>
using namespace std;

class box
{
	float l,b,h;
	public:
		box()
		{
		  	l=0;
		  	b=0;
		  	h=0;
		}
		box(float x, float y,float z)
		{
			l=x;
			b=y;
			h=z;
		}
		void set();
	 friend float calculatevolume(box *ptr);
};

void box :: set()
{
	cout<<"enter length"<<"\t";
	cin>>l;
	cout<<"enter breth"<<"\t";
	cin>>b;
	cout<<"height"<<"\t";
	cin>>h;
 } 
 
 float calculatevolume(box *ptr)
 {
 	float y;
 	y = ptr->l * ptr->b * ptr->h;
 	return y;
 }
 
 void boxcomp(float y, float j)
 {
 	if(y>j)
 	{
 		cout<<" box 1 is bigger"<<"\t";
	 }
	 else {
	 	cout<<" box 2 is bigger"<<"\t";
	 }
 }
 int main()
 {
 	float j,y;
	box o1,o2,*ptr1,*ptr2;
	ptr1=&o1;
	ptr2=&o2;
	
    ptr1->set();
    ptr2->set();
    
    
 	y=calculatevolume(ptr1);
 	j=calculatevolume(ptr2);
 	
	 cout<<" the volume of box 1 is "<<y<<" and box 2 is "<<j<<endl;
 	
 	boxcomp(y,j);
 	
    
 }
 
