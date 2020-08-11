#include<iostream>
using namespace std;
#define Max 100
class stack{
	int top;
	public:
	stack(){top=-1;}
	int x[Max];
	bool isEmp();
	bool isFull();
	int pop();
	bool push(int temp);
	int peek();
	
};

bool stack:: isEmp(){
	return (top<0);
}
bool stack:: isFull(){
	return (top>=Max-1);
}

int stack:: pop(){
	if(isEmp()){
		cout<<"Empty Stack"<<endl;
		return -1;
	}
	else{
		int temp = x[top];
		x[top--]=NULL;
		return temp;
	}
}

bool stack:: push(int temp){
	if(isFull()){
		cout<<"Stack FUll"<<endl;
		return -1;
	}
	else{
		x[++top]=temp;
		return 1;
	}
}

int stack:: peek(){
	if(isEmp()){
		cout<<"Empty Stack"<<endl;
		return -1;
	}
	else{
		return x[top];
	}
}

int main(){
	
}
