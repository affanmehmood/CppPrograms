#include<iostream>
#include<string.h>
using namespace std;

class pop
{};

class city
{};

class town
{};

int* doit(int x){
	if(x==1){
	pop obj;
	return (int*) &obj;
	}
	else if(x==2){
	city obj;
	return (int*) &obj;
	}
	else if(x==3){
	town obj;
	return (int*) &obj;
	}
}

int main(){
	int x;
	cin>>x;
	cout<<doit(x);
}
