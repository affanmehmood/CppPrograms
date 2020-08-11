#include<iostream>
using namespace std;

class LocalPhone
{
	protected:
		int phone;
		public:
		void setdata();
		void getdata();
		LocalPhone(){
			cout<<"local const called "<<endl;
			phone=0;}
			~LocalPhone(){
		cout<<"local dest called "<<endl;
	}
};
 
void LocalPhone:: setdata(){
	cout<<"enter local phone "<<endl;
	cin>>phone;
}
void LocalPhone::getdata(){
	cout<<"local phone is "<<phone<<endl;
}

class NatPhone : protected LocalPhone{
	protected:
		int CityCode;
		public:
		void setdata();
		void getdata();
			NatPhone(){
			cout<<"National const called "<<endl;
			CityCode=0;}
			~NatPhone(){
		cout<<"National dest called "<<endl;
	}
};
void NatPhone:: setdata(){
	LocalPhone::setdata();
	cout<<"Enter City Code "<<endl;
	cin>>CityCode;
}
void NatPhone:: getdata(){
	LocalPhone::getdata();
	cout<<"City Code "<<CityCode<<endl;
}
class IntPhone : protected NatPhone{
	int ConCode;
	public:
	void setdata();
	void getdata();
	IntPhone(){
		cout<<"International const called "<<endl;
		ConCode=0;
	}
	~IntPhone(){
		cout<<"International dest called "<<endl;
	}
};
void IntPhone:: setdata(){
	NatPhone::setdata();
	cout<<"Enter Country Code "<<endl;
	cin>>ConCode;
}
void IntPhone:: getdata(){
	NatPhone::getdata();
	cout<<"Country Code is "<<ConCode<<endl;
}

int main(){
	IntPhone obj;
	obj.setdata();
	obj.getdata();
}
