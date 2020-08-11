#include<iostream>
using namespace std;
class box
{
	private:
		float l,b,h;
		
	public:
		box()
		{
		     l=0;
		     b=0;
		     h=0;
		}
		void setdata();
		void getdata();
		float volume();
		box operator + (box tbox);
		box operator + (int tbox);
		box operator * (box tbox);
		box operator * (int tbox);
		box operator - (box tbox);
		box operator - (int tbox);
		bool operator > (box tbox);
		bool operator > (int tbox);
		bool operator < (box tbox);
        bool operator < (int tbox);
        void rest();
};
void box :: setdata()
{
	cout<<"enter length"<<endl;
	cin>>l;
	cout<<"enter breath"<<endl;
	cin>>b;
	cout<<"enter height"<<endl;
	cin>>h;
	cout<<endl;
}
void box :: getdata()
{
	cout<<"length is "<<l<<endl;
	cout<<"breath is "<<b<<endl;
	cout<<"height is "<<h<<endl<<endl;
}
float box :: volume()
{
	float temp;
	temp=l*h*b;
	return temp;
}
box box:: operator + (box tbox)
{
	box res;
	res.h = h+tbox.h;
	res.l=l+tbox.l;
	res.b=b+tbox.h;
	
	return res;
}

box box:: operator + (int tbox)
{
	box res;
	res.h = h+tbox;
	res.l=l+tbox;
	res.b=b+tbox;
    
	return res;
}

box box:: operator * (box tbox)
{
	box res;
	res.h = h*tbox.h;
	res.l=l*tbox.l;
	res.b=b*tbox.h;
	
	return res;
}

box box:: operator * (int tbox)
{
	box res;
	res.h = h*tbox;
	res.l=l*tbox;
	res.b=b*tbox;
	
	return res;
}

box box:: operator - (box tbox)
{
	box res;
	res.h = h-tbox.h;
	res.l=l-tbox.l;
	res.b=b-tbox.h;
	
	return res;
}

box box:: operator - (int tbox)
{
	box res;
	res.h = h-tbox;
	res.l=l-tbox;
	res.b=b-tbox;
	
	return res;
}


bool box:: operator > (box tbox)
{
	cout<<"YEH CHEZ"<<this->volume();
 }

bool box:: operator > (int tbox)
{
	return this->volume() > tbox;
 }  
 
bool box:: operator < (box tbox)
{
	return this->volume() < tbox.volume();
 } 
 
bool box:: operator < (int tbox)
{
	return this->volume() < tbox;
 } 
 
 bool operator < (int x, box obj)
 {
 	return x<obj.volume();
 }
 
 void box:: rest()
 {
 	l=0;
 	h=0;
 	b=0;
 }
int main()
{
	box b1,b2,b3;
	cout<<"enter parameters for box 1 "<<endl;
	b1.setdata();
	cout<<"enter parameters for box 2 "<<endl;
	b2.setdata();
	
	
	float vol1=b1.volume();
	float vol2=b2.volume();
	
	b3=b1-b2;
	cout<<"parameters when object 1 - object 2 are "<<endl;
	b3.getdata();
	b3.rest();
	
	b3=b1-2;
	cout<<"parameters when object 1 - 2 are "<<endl;
	b3.getdata();
	b3.rest();
	
	b3=b1+b2;
	cout<<"parameters when object 1 + object 2 are "<<endl;
	b3.getdata();
    b3.rest();
	
	b3=b1+2;
	cout<<"parameters when object 1 - 2 are "<<endl;
	b3.getdata();
	b3.rest();
	
	b3=b1*b2;
	cout<<"parameters when object 1 x object 2 are "<<endl;
	b3=b1*2;
	b3.getdata();
	b3.rest();
	
	int x=0;
	x=b1>b2;
	
	if(x==0)
	{
		cout<<"1st object is smaller than the 2nd object "<<endl;
	}
	else
	{
		cout<<"2nd object is larger than the 1st object"<<endl;
	}
	
     x=0;
	x=b1>2;
	
	if(x==0)
	{
		cout<<"1st object is smaller than the integer"<<endl;
	}
	else
	{
		cout<<"the integer is larger"<<endl;
	}

     x=0;
	x=b1<b2;
	if(x==0)
	{
		cout<<"2nd object is smaller than 1st object "<<endl;
	}
	else
	{
		cout<<"1st object is larger than 2nd "<<endl;
	}
	
     x=0;
	if(x=b1<2)
	{
	cout<<"new object has the values"<<endl;
}
 } 
