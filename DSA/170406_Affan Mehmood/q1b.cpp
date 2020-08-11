#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int A[20] = {0}, temp=0, val=0,i=0;
    	
	while(i<20){
		val=rand()%20+1;// generate random num
		
		for (int j=0; j<i; j++){
			if (A[j] == val)
				temp++; // incriments if any reputation occurs
		}		
		if(temp==0){
			A[i] = val;// storing value if value isn't repeated
			i++;
		}
		temp=0; // reset temp to run loop again
	}
	
	for (int i=0; i<20; i++){
		cout << A[i] << endl; //print loop
	}
}
