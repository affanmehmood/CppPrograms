#include<iostream>
using namespace std;


sort(int arr[], int k, int times){
	int tempLast,temp2;
	for(int l=0; l<times; l++){
	
	tempLast = arr[k-1];
	
	for (int i=k-1; i>0; i--){
		arr[i]=arr[i-1];
	}
	arr[0]=tempLast;
}
	for(int x=0; x<10; x++){
		cout<<arr[x]<<" ";	
	}
}

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	sort(arr, 10, 9);
}
