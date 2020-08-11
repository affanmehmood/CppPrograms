#include<iostream>
using namespace std;
class box
{
	public:
		int h,l,b;
		void setdata();
		void getdat();
		box operator + (box);
		void getdata();
		box operator +(int x);
};

box box:: operator + (box tbox)
{
	box res;
	res.h = h+tbox.h;
	res.l=l+tbox.l;
	res.b=b+tbox.h;
	
	return res;
}
void box:: setdata()
{
	cout<<"enter "<<endl;;
	cin>>l;
	cin>>h;
	cin>>b;
	
}
void box:: getdata()
{
	cout<<l<<endl<<b<<endl<<h<<endl;
}
int main()
{
	box b1,b2,b3;
	b1.setdata();
	b2.setdata();
	b3=b1+b2+7;
	b3.getdata();
}
box box:: operator +(int x)
{
	box res;
	res.h=h+x;
	res.l=l+x;
	res.b=b+x;
	return res;
	
}
