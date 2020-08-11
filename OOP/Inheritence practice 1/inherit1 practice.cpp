#include<iostream>
using namespace std;

class mother
{
	protected:
		string name;
		int age;
		public:
		void setdata();
		void getdata();
		mother(){
			cout<<"mother const called "<<endl;
			name=" ";
			age=0;}
			~mother(){
		cout<<"mother dest called "<<endl;
	}
};
 
void mother:: setdata(){
	cout<<"Enter mother's name "<<endl;
	cin>>name;
	cout<<"Mother's age "<<endl;
	cin>>age;
}
void mother::getdata(){
	cout<<"Mother name "<<name<<endl;
	cout<<"Mothers age "<<age<<endl;
}

class daughter : protected mother{
	protected:
		string name;
		int age;
		public:
		void setdata();
		void getdata();
			daughter(){
			cout<<"daughter const called "<<endl;
			name=" ";
			age=0;}
			~daughter(){
		cout<<"daughter dest called "<<endl;
	}
};
void daughter:: setdata(){
	mother::setdata();
	cout<<"Enter daughters's name "<<endl;
	cin>>name;
	cout<<"daughter's age "<<endl;
	cin>>age;
}
void daughter:: getdata(){
	mother::getdata();
	cout<<"daughter's name "<<name<<endl;
	cout<<"daughter's age "<<age<<endl;
}
class grandson : protected daughter{
	string name;
	int age;
	public:
	void setdata();
	void getdata();
		grandson(){
			cout<<"grandson const called "<<endl;
			name=" ";
			age=0;
	}
	~grandson(){
		cout<<"grandson dest called "<<endl;
	}
};
void grandson:: setdata(){
	daughter::setdata();
	cout<<"Enter grandson's name "<<endl;
	cin>>name;
	cout<<"grandson's age "<<endl;
	cin>>age;
}
void grandson:: getdata(){
	daughter::getdata();
	cout<<"grandson's name "<<name<<endl;
	cout<<"grandson's age "<<age<<endl;
}

int main(){
	grandson obj;
	obj.setdata();
	obj.getdata();
}
