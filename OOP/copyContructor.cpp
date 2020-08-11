#include<iostream>
using namespace std;

class A{
	int x;
	public:
		int getX(){return x;}
		A(int x){this->x = x;}
		A(A &obj){ // copy constructor
			x=obj.x;
		}
};

int main(){
	A obj(4);
	A obj2(obj); // copy the object
	obj2=obj; // also calls copy constructor
	cout<<obj2.getX();
}
