#include<iostream>
using namespace std;
class employee
{
	char name[20];
	int idNo;
	char dep[20];
	char pos[20];
	public
	employee(char x[20], int y, char z[20], char k[20])
	{
		name[20] = x[20];
		idNo = y;
		dep[20] = z[20];
		pos[20] = k[20];
	}
	employee(char x[20], int y,)
	{
		name[20] = x[20];
		idNo = y;
		dep[20] = "";
		pos[20] = "";
	}
	employee()
	{
		
	}
void :: set();
void :: get();
};

void :: set()
{
	cin>> idNo;
	for(int i=0; i<20; i++)
	{	
	cin>> name[i];
	cin>> dep[i];
	cin>> pos[i];
    }
}
void :: set()
{
	cout<< idNo;
	for(int i=0; i<20; i++)
	{	
	cout<< name[i];
	cout<< dep[i];
	cout<< pos[i];
    }
}

int main()
{
	employee o1(a,0,b,c);
	o1.set();
	o1.get()
	
}
