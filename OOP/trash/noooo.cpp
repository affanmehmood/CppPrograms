#include<iostream>
using namespace std;

class data
{
   string name;
   string section;
   string status;
   int tmark;
   int mark; 
   public:
   int tmdata();
   void grade();
   data()
   { 
	tmark=100;
     mark=0;
   }
};

int data :: tmdata()
{
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter sec:"<<endl;
	cin>>section;
	cout<<"enter status:"<<endl;
	cin>>status;
	
	do
	{
		if(mark>tmark || mark<0 )
		{
		   cout<<"enter correct marks again"<<endl;
		}
	cout<<"input marks of student"<<endl;
	cin>>mark;
   } while(mark>100 || mark<0 );
	return mark;
	
 } 
void data :: grade()
{
		if(mark>80)
		{ 
		   cout<<"Student has A grade"<<endl;
		}
		else{
			cout<<"grade B"<<endl;
		}
}

int main()
{
	int tm=0, av=0;
	data student[10];
	for (int i=0; i<10; i++)
	{
		tm = student[i].tmdata() + tm;
        student[i].grade();
	}
	
	cout<<"total marks =  "<<endl<<tm<<endl;
	av=tm/10;
	cout<<"average marks = "<<endl<<av;
	
}
