#include<iostream>
using namespace std;
int sum=1;
void fact(int x){
	if(x=0)
	return;
	sum=sum*(x-1);
	x--;
	fact(x);
	cout<<sum;
}

int main(){
	fact(21);
}
