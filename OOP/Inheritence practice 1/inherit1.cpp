#include<iostream>
using namespace std;
class publication
{
   	string name;
   	int price;
   	public:
   	void getdatapub();
   	void setdatapub();
   	publication(){
   		cout<<"mother class const called "<<endl;
	}
	~publication(){
   		cout<<"mother class dest called "<<endl;
	   }
};
void publication:: setdatapub()
{
	cout<<"Enter name "<<endl;
	cin>>name;
	cout<<"Enter price "<<endl;
	cin>>price;
	}

void publication:: getdatapub()
{
	cout<<"Nmae of the book is "<<name<<endl;
	cout<<"Price of the book is "<<price<<endl;}

class book : public publication{
    int pagecount;
    public:
    void setdatab();
    void getdatab();
    book(){
   		cout<<"daughter1 class const called "<<endl;
	}
	~book(){
   		cout<<"daughter1 class dest called "<<endl;
	   }
};

class tape : public publication{
	int playtym;
	public:
	void setdatat();
	void getdatat();
	tape(){
   		cout<<"daughter2 class const called "<<endl;
	}
	~tape(){
   		cout<<"daughter2 class dest called "<<endl;
	   }
};
void book:: setdatab()
{
	publication::setdatapub();
	cout<<"Page count are  "<<endl;
	cin>>pagecount;
	}
void tape:: setdatat()
{
	publication::setdatapub();
	cout<<"Play time is  "<<endl;
	cin>>playtym;}
void book:: getdatab()
{
	publication::getdatapub();
	cout<<"total Pages "<<pagecount<<endl;}
void tape:: getdatat()
{
	publication::getdatapub();
	cout<<"playtime is "<<playtym<<endl;
	
}

int main(){
	book o1;
	tape o2;
	o1.setdatab();
	o2.setdatat();
	
	o1.getdatab();
	o2.getdatat();

}
