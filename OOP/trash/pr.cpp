#include<iostream>
using namespace std;


 class student
{
	
	int id;
	
	public:
		string name;
		student()
		{
			name = "";
			id=0;
			cout<<"constructer called"<<endl<<"name : "<<name<<endl<<"id : "<<id<<endl;
		}
		void getdata();
		void setdata(string, int);
};

void student :: setdata(string x, int y)
{
	name = x;
	id = y;
	
	
	
}

void student :: getdata()
{
	
	cout<<"member function getdata called after setting vals"<<endl<<"name is : "<<name<<endl;
	cout<<"id is : "<<id<<endl;
	
 } 
 

int main() {
	student s1;
	
	string x="Affan";
	int y=170406;
	s1.setdata(x,y);
	s1.getdata();
	
}
