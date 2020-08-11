#include<iostream>
using namespace std;
class perdata
{
	protected:
	string lname;
	string fname;
	string adress;
	string city;
	string state;
	int zip;
	int phone;
	public:
	void setdata();
	void getdata();
	perdata(){
	lname=" ";
	fname=" ";
	adress=" ";
	city=" ";
	state=" ";
	zip=0;
	phone=0;}
};
void perdata:: setdata(){
	cout<<"enter last name "; cin>>lname;
	cout<<"enter first name "; cin>>fname;;
	cout<<"adress "; cin>>adress;
	cout<<"enter city "; cin>>city;
	cout<<"enter state "; cin>>state;
	cout<<"enter zip code "; cin>>zip;
	cout<<"enter phone number "; cin>>phone;
}
void perdata::getdata(){
	cout<<endl<<endl<<endl;
	cout<<lname<<endl;
	cout<<fname<<endl;
	cout<<adress<<endl;
	cout<<city<<endl;
	cout<<state<<endl;
	cout<<zip<<endl;
	cout<<phone<<endl;
}
class custdata : public perdata{
	int custno;
	bool mlist;
	public:
	void setdata();
	void getdata();
	custdata(){
	custno=0;
	mlist=0;}
};

void custdata:: setdata(){
	perdata::setdata();
	cout<<"enter customer number "; cin>>custno;
	cout<<"enter mailing list 1 or 0 "; cin>>mlist;}

void custdata:: getdata(){
	perdata::getdata();
    cout<<"customer number "<<custno<<endl;
	cout<<"mailing list "<<mlist<<endl;}
	
class prefcus : public custdata{
    double peram,dislevel;
	public:
	prefcus(){peram=0; dislevel=0;}
	void setdata();
	void getdata();
	void check();
};

void prefcus:: setdata(){
	custdata::setdata();
	do{cout<<"enter amount of purchase "; cin>>peram;}while(peram<0);}
	
void prefcus:: getdata(){
	custdata::getdata();
    cout<<"amount of purchase "<<peram<<endl;
	cout<<"discount "<<dislevel<<"%"<<endl;}
	
void prefcus:: check(){
	if(peram>=500 && peram<1000){dislevel=5;}
	else if(peram>=1000 && peram<1500){dislevel=6;}
	else if(peram>=1500 && peram<2000){dislevel=7;}
	else if(peram>=2000){dislevel=10;}}
 
int main(){
	prefcus obj;
	obj.setdata();
	obj.getdata();
}
