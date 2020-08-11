#include<iostream>
using namespace std;

class a{
	public:
	int x;
		a(){x=1;}
		virtual void getData(){cout<<"x is "<<x<<endl;};
};

class b: public a{
	public:
	int y;
	public:
		b(){y=1;}
		void getData(){cout<<"y is "<<y<<endl;}
};

class c: public b{
	public:
	int z;
	public:
		c(){z=1;}
		void getData(){cout<<"z is "<<z<<endl;}
};

int main(){
a *ptr0,*ptr,*ptr2,obj0;

b  obj;
ptr=&obj;

c obj2;
ptr2=&obj2;

ptr0=&obj0;
ptr0->getData();

ptr->getData();

ptr2->getData();
}
