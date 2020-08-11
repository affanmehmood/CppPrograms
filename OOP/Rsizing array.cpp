#include<iostream>
#include<string>
using namespace std;
class team
{
	string name;
	int no;
	public:
	team(){
	name="no name";
	no=0;
	}
	friend void setdata(team *ptr, int lim);
	friend team* changesize(team *ptr, int lim, int newlim);
    friend void setremainingdata(team *ptr,int o, int n);
    friend void getdata(team *ptr, int newlim);
};
void setdata(team *ptr, int lim)
{
	for(int i=0;i<lim;i++)
	{
		cout<<"Enter Names and Numbers of the players"<<endl;
		cin>>ptr->name>>ptr->no;
		ptr++;
	}
}

team* changesize(team *ptr, int lim, int newlim ){
	team *temp,*temp2,*ptr2;
	ptr2=ptr;
	temp = new team[newlim];
	temp2=temp;
	for(int i=0; i<lim; i++){
	temp->name=ptr->name;
	temp->no=ptr->no;
	temp++;
	ptr++;
	}
	ptr=ptr2;
	delete []ptr;
	temp=temp2;

	setremainingdata(temp, lim, newlim);
	
	return temp;
}

void setremainingdata(team *ptr,int o,int n)
{
	ptr+=o;
	for(int i=0;i<=n;i++)
	{
		if(i>o)
		{
			cout<<"Enter data of remaining "<<n-o<<" people (NAME AND NUMBER)"<<endl;
			cin>>ptr->name>>ptr->no;
			ptr++;
		}
	}
}
void getdata(team *ptr, int newlim)
{
	for(int i=0; i<newlim;i++)
	{
		cout<<" Name is "<<ptr->name<<"                    Number is "<<ptr->no<<endl<<endl;
		ptr++;
	}
}
int main()
{
    team *ptr, *temp;
	int lim = 0;
	cout<<"Enter limit"<<endl;
	cin>>lim;
	ptr = new team[lim];
	setdata(ptr, lim);
	cout<<"                        *READING FROM OLD ARRAY*"<<endl<<endl;
	getdata(ptr, lim);
	int newlim=0;
	int pk=0;
	do{
		if(pk>0)
		{
			cout<<"NEW LENGTH SHOULD BE GREATER THAN OLD LENGTH FOR THIS PROGRAM "<<endl;
		}
	cout<<"Enter new limit"<<endl;
	cin>>newlim;
	pk++;
} while(newlim<=lim);
	temp = changesize(ptr, lim, newlim);
	cout<<endl<<endl<<"THIS IS FROM NEW SIZED ARRAY "<<endl<<endl;
	getdata(temp, newlim);	
}
