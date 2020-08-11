#include <iostream>
using namespace std;
void ls(int *ar, int size);
void rs(int *ar, int size);

int main(){
	cout<<"enter size of array "<<endl;
	int size;
	cin>>size;
	int x[size];
	cout<<"enter values ";
	for(int i=0; i<size; i++)
	cin>>x[i];
	
	ls(x,size);
	for(int i=0; i<size; i++)
	cout<<x[i];
	cout<<endl;
	
	rs(x,size);
	for(int i=0; i<size; i++)
	cout<<x[i];
}
void ls(int *ar, int size){
	int temp =ar[0];
	
	for(int i=0; i<size-1; i++)
	ar[i]=ar[i+1];
	
	ar[size-1]=temp;
}

void rs(int *ar, int size){
	int temp =ar[size-1];
	for(int i=size-1; i>0; i--)
	ar[i]=ar[i-1];
	
	ar[0]=temp;
	
}
