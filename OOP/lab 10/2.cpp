#include<iostream>
using namespace std;

class teacher
{
	protected:
		string name;
		int age;
		string adr;
		public:
		void setdata();
		void getdata();
		teacher(){
			cout<<"teacher const called "<<endl;
			name=" ";
			age=0;
			adr=" ";}
			~teacher(){
		cout<<"teacher dest called "<<endl;
	}
};
 
void teacher:: setdata(){
	cout<<"Enter teacher's name "<<endl;
	cin>>name;
	cout<<"teacher's age "<<endl;
	cin>>age;
	cout<<"enter teacher's adress "<<endl;
	cin>>adr;
}
void teacher::getdata(){
	cout<<"teacher's name "<<name<<endl;
	cout<<"teacher's age "<<age<<endl;
	cout<<"teacher's adress "<<adr<<endl;
}

class writer
{
	protected:
		string wname;
		int wage;
		int book;
		public:
		void wsetdata();
		void wgetdata();
		writer(){
			cout<<"writer const called "<<endl;
			wname=" ";
			wage=0;
			book=0;}
			~writer(){
		cout<<"writer dest called "<<endl;
	}
};
 
void writer:: wsetdata(){
	
	cout<<"Enter writer's name "<<endl;
	cin>>wname;
	cout<<"writer's age "<<endl;
	cin>>wage;
	cout<<"enter writer's no of books "<<endl;
	cin>>book;
	cout<<book<<endl<<endl;
}
void writer::wgetdata(){
	cout<<"writer's name "<<wname<<endl;
	cout<<"writer's age "<<wage<<endl;
	cout<<"number of books "<<book<<endl<<endl;
}

class scholar : public teacher ,public writer{
	
};

int main(){
	scholar obj;
	obj.setdata();
	obj.wsetdata();
	obj.getdata();
	obj.wgetdata();
}
