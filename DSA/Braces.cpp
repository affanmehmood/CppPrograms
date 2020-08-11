#include<iostream>
using namespace std;
#define MAX 10

class Stack{
int top;
public:
string a[MAX]; 
Stack() { top = -1; }
bool push(string x);
string pop();
string peek();
bool isEmpty();
};

bool Stack::push(string x){
if (top >= (MAX-1)){
cout << "Stack Overflow";
return false;
}
else{
a[++top] = x;
cout<<x <<" pushed into stack\n";
return true;
}
}

string Stack::pop(){
if (top < 0){
cout << "Stack Underflow";
return 0;
}
else{
string x = a[top--];
return x;
}
}

bool Stack::isEmpty(){
return (top < 0);
}
string Stack:: peek(){
	string temp; 
	if (isEmpty()){
		cout << "Stack is empty";
		return 0;
	}
	temp = a[top]; 
	return temp;
	}
int main(){
	Stack S; string st;
for (int i = 0; i < MAX; i++){
cin>>st;
	if(st=="{" || st=="(" || st=="[")
		S.push(st);
		
	if(st == "}"){
	if(S.peek() == "{"){
	S.pop();
	else{
	cout<<"Wrong Braces";	
	}
	}
}
	else if (st == "]"){ 
	if (S.peek() == "["){
	S.pop();
	else{
	cout<<"Wrong Braces";	
	}
	}
}
	else if(st==")"){
	if (S.peek()=="("){
	S.pop();
	else{
	cout<<"Wrong Braces";	
	}
	}
}
}
}
