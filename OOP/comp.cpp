#include<iostream>
using namespace std;

class complex
{   private:
	int real,string[];
	double imag;
	public:
	friend complex add(complex j, complex l);
	friend complex mult(complex x, complex y);
	friend complex sub(complex a, complex b);
	void set();
	void show();
	
};
complex mult(complex x, complex y)
{   complex k;
	k.real = x.real * y.real - x.imag * y.imag;
	k.imag = x.real * y.imag + y.real*x.imag;
	return k;
}
complex sub(complex a, complex b)
{
	complex z;
	z.real = a.real-b.real;
	z.imag= a.imag-b.imag;
	return z;
}
complex add(complex j, complex l)
{  complex y;
	y.real=j.real+l.real;
	y.imag=l.imag+j.imag;
	return y;
}

void complex :: set()
{
	cout<<"enter real part"<<"\t";
	cin>>real;
	cout<<"enter imag part"<<"\t";
	cin>>imag;
	cout<<endl;
	cout<<endl;
}
void complex :: show()
{
	cout<<"answer is";
	cout<<"\t"<<real<<"+"<<imag<<"i";
	cout<<endl;
	cout<<endl;
}
int main()
{
	complex o1,o2,oa,os,om;
	o1.set();
	o2.set();

	om=mult(o1,o2);
	os=sub(o1,o2);
	oa=add(o1,o2);
	
	cout<<"MULTIPICATION"<<endl;
	om.show();
	cout<<"ADDITION"<<endl;
	oa.show();
	cout<<"SUBTRACTION"<<endl;
	os.show();
}
