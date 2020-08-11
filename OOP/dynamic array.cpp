#include<iostream>
using namespace std;

int main(){
	int *ptr,lim,*temp;
	cout<< "enter limit";

	cin>>lim;
	ptr = new int[lim];

	temp = ptr;

	for(int j=0;j<lim;j++){
		cin>> *temp;
		temp++;
	}

	temp=ptr;
	
	for (int j=0;j<lim;j++){
		cout<<*temp<<endl;
		temp++;
	}

}
