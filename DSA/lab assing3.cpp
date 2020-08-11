#include <iostream>
using namespace std;
void fun(int *a,int size);

int main(){
	int size;
	cout<<"enter size ";
	cin>>size;
	int a[size];
	
	cout<<"enter numbers ";
	for(int i=0; i<size; i++)
	cin>>a[i];
	fun(a,size);
}

void fun(int *a,int size){
	int temp;
	for(int j=0; j<size; j++){
	for(int i=0; i<size; i++){
		if(a[j]<a[i]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}}}
	
	int b[size],mid;
	
	if(size%2!=0){
		mid=(size-1)/2;
		b[mid]=a[0];
	}
	
	else{
		mid=(size-1)/2;
		b[mid]=a[0];
}
	int i=1;
	for(int j=1; j<size; j++){
	
	b[mid+j]=a[i];
	b[mid-j]=a[i+1];
	i=i+2;
	}
	
	for(int i=0; i<size; i++)
	cout<<b[i]<<" ";
	cout<<endl;
}
