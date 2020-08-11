#include<iostream>
#include<string.h>
using namespace std;
class publication 
{
	protected:
	string title;
	float price;
	public:
	virtual void getdata(){}
	virtual void putdata(){}
};


class book: public publication
{
	int pagecount,x;
	public:
	void getdata();
	void putdata();
};
void book:: getdata()
{
	cout<<"Name of the book is: "<<title<<endl;
	cout<<"Price of the book is: "<<price<<endl;
	cout<<"PAGE COUNT: "<<x<<endl;
}
void book::putdata(){
	cout<<"Enter name of the Book: "; cin>>title;
	cout<<"Enter price of the Book: "; cin>>price;
	cout<<"Enter number of pages: "; cin>>pagecount;
}
class tape: public publication
{
	
	int playtime;
	public:
	void getdata();
	void putdata();
};
void tape:: getdata()
{
	cout<<"Name of the tape is: "<<title<<endl;
	cout<<"Price of the tape is: "<<price<<endl;
	cout<<"PLAYTIME IS: "<<playtime<<endl;
}
void tape::putdata(){
	cout<<"Enter name of the Tape: "; cin>>title;
	cout<<"Enter price of the tape: "; cin>>price;
	cout<<"Enter minutes on tape: "; cin>>playtime;
}
int main()
{
	publication *ptr,*ptr2;
	book obj; tape obj2;
	ptr=&obj; ptr2=&obj2;
	
	ptr->putdata();
	ptr2->putdata();
	ptr->getdata();
	ptr2->getdata();
}
