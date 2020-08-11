#include<iostream>
using namespace std;

class a{
	public:
	int x;
};

int main(){
	int p;
	cout<<"P "; cin>>p;
	
	if(p==1){
		a obj;
		obj.x=2;
	}
	
	cout<<obj.x; 
	
	//  Tumnay iss tarhan scope ma objects bhnaye hain.
	//  issi liye jab if k bahir awogi toh object destroy ho jayega
	//  aur jab passenger say admin walai jaga par awogi ya vice versa toh purana wala object khali hoga 
	
}
