#include<iostream>
using namespace std;
class team
{
	private: int height, weight;
	public:
	friend team operator +(int x, team obj);
	void setdata();
	void getdata();
};

void team:: setdata(){
	cout<<"enter name, roll"<<endl;
	cin>>height;
	cin>>weight;
}
void team:: getdata(){
	cout<<"Height: "<<height<<endl<<"Weight: "<<weight;
}
team operator +(int x, team obj){
	
	obj.height=x+obj.height;
	obj.weight=x+obj.weight;
	return obj;
}
int main(){
	team o1,o2;
	o1.setdata();
	o2=20+o1;
	o2.getdata();
}
