#include<iostream>
using namespace std;
int MAX=5;
struct khabib{
	int top;
	public:
		int a[MAX];
		khabib()  { top = -1; } 
    bool push(int x); 
    int pop(); 
    bool isEmpty();
    bool isFull();
};
bool khabib:: isFull(){
	if(){
		top=MAX-1
	}
}
bool khabib:: push(int x){
	if(isFull()){
		cout<<"Stack is full "<<endl;
	}
	else(){
		a[top+1]=x;
		return 1;
	}
	
}

int khabib:: pop(){	
if(isEmpty()){
	cout<<"Stack is empty";
	return 1;
}
int temp=khabib[top];
top--;
}


bool khabib::a isEmpty(){
	if(top==-1){
		retun 1;
	}
}


int main(){
	
}
