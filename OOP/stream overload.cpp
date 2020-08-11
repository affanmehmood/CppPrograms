#include<iostream>
using namespace std;

class dis
{
	float feet, inches;
	public:
		dis(int x=0, int y=0)
		{
			feet=x;
			inches=y;
		}
	friend ostream &operator << (ostream &bahir, dis &obj);
	friend istream &operator >> (istream &andar, dis &obj);
};

ostream operator << (ostream &bahir, dis &obj)
{
	bahir<<"Feet is "<<obj.feet<<endl;
	bahir<<"Inches are "<<obj.inches<<endl;	
}

istream &operator >> (istream &andar, dis &obj)
{
	andar>>obj.feet>>obj.inches;
}

int main()
{
	dis o1;
	cin>>o1;
	cout<<o1;
}
