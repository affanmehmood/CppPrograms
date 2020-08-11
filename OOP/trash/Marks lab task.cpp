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
   data()
   { tmark =0;
     mark=0;
   }
};

int data :: tmdata()
{
	do
	{
		if(mark>100 || mark<0 )
		{
		   cout<<"enter correct marks again";
		}
	cout<<"input marks of student";
	cin>>mark;
   } while(mark>100 || mark<0 );
	return mark;
	
 } 


int main()
{
	int tm=0, av=0;
	data student[10];
	for (int i=0; i<10; i++)
	{
		tm = student[i].tmdata() + tm;
		if(student[i]>80)
		{ 
		   cout<<"Student has A grade"
		}
		else{
			cout<<"grade B"
		}
	}
	
	cout<<"total marks =  "<<tm;
	av=tm/10;
	cout<<"average marks = "<<av;
	
}
