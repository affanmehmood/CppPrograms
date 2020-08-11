#include<iostream>
using namespace std;

void fun(int array[]){
	for(int i=0; i<10; i++){
	array[i]+=-1;
	}
}

int main(){
	int array[10];
	for(int i=0; i<10; i++){
	array[i]=i+1;
	}
	
	fun(array);
	
	for(int i=0; i<10; i++){
	cout<<array[i];
	}
}
