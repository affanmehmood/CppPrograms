#include<iostream>
using namespace std;

class mother{
	protected:
	string name;
	int age;
	public:
	void check(){cout<<"mother called ";}
	mother(string x,int y){name=x; age=y;}
};

class daughter : public mother{
	protected:
	bool gender;
	
	public:
	void check(){cout<<"daughter called ";}
	daughter(string y,int k,bool x) : mother(y,k) {gender=x;}
	void get(){cout<<name<<endl<<age<<endl<<gender;}
};
int main(){
	daughter obj("mom",45,1);
	obj.check();
	obj.get();
}
