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
bool isEmpty();
void display();
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

void Stack:: display(){
		for(int i=0;i<MAX;i++){
			cout<<pop();
		}
	}
int main(){
	Stack S1,S2;
	string temp;
for(int i=0;i<MAX;i++){
	cin>>temp;
	S1.push(temp); //pushing
	}
for(int i=0;i<MAX;i++){
	S2.push(S1.pop()); //pop from stack 1 and push it into s2
	cout<<"*Stack 2* "; 
	}
	S2.display();
}
