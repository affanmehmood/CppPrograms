#include<iostream>
using namespace std;

int main(){
double x,y;
cin>>x;
cin>>y;

	try{
		if(y==0){
		throw "y cannot be 0 ";
		}
		else if(y<0){
			throw y;
		}
		cout<<x/y;
		}
	
	catch(const char* msg){
	cout<<msg;
	}
	
	catch (double &y){
		cout<<y<<" is negative";
	}
	
}
