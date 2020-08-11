#include<iostream>
using namespace std;
class player
{
	private: int w,h;
	public: 
	player(){
	cout<<"enter weight, height "<<endl;
	cin>>w>>h;}
		
	void getdata();
	friend player operator >=(int x, player obj);
	
};

void player:: getdata(){
	cout<<"Height: "<<h<<endl<<"Weight: "<<w;}
	
	bool operator >=(int x, player obj){
	int x

	return x;
}
int main(){
	player o1;
	bool x;
	x=20>=o1;
	if(x==1){
		cout<<"20 is greater ";
	}
	else{
		cout<<"obj is big ";
	}
}

