#include<iostream>
using namespace std;

void selectS(int arr[]){
	int tmp=0;
	for (int i=0; i<10-1;i++)
		for (int j=i+1; j<10; j++)
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

	for( int i=0; i<10;i++)
	cout << arr[i] << " "<<endl;
}

void bubbleS(int arr[]){ 
int tmp=0;
   for (int i = 0; i < 10-1; i++)    {
       for (int j=0; j<10-i-1; j++){
           if (arr[j] > arr[j+1]) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}}}
		for( int i=0; i<10;i++)
	cout << arr[i] << " "<<endl;
}
void insertS(int arr[]){
	int cursor=0,j;
	for (int i=1; i<10; i++) 
   { 
       cursor = arr[i]; 
       j = i-1; 
       while (j>=0 && arr[j]>cursor) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = cursor;
}
for( int i=0; i<10;i++)
	cout << arr[i] << " "<<endl;
}

int main(){
	int arr[10]={10,8,9,6,4,8,2,1,3,5};
    int ch;
	do(){
	cout<<"enter 1 for select sort, 2 for bubble and 3 for Insert sort"<<endl;
	cin>>ch;
	if(ch==1){
		selectS(arr);
	}
	else if(ch==2){
		bubbleS(arr);
	}
	else if(ch==3){
		insertS(arr);
	}
}while(ch!=0);
}
