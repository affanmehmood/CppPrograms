#include<iostream>
using namespace std;

int main(){
	string Q[8][8];
	int check = 0;
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) //loop to initialize the array with dots
		Q[i][j] = " . ";
	}
	
	for (int i = 0; i < 8; i++)
	{
		do {
			cout << "Enter Column " << i << endl;

			cin >> check;
		} while (check>7 || check<0); //to mskr sure user enters correctly
		Q[i][0] = " . ";   //to give dots to all rows of coloumn 0
		Q[i][check] = " Q "; //to give Qs to coloums in the array 
		

	}

	for (int i=0; i<8; i++)
	{
		for (int j=0; j<8; j++) //print loop
		cout << Q[i][j];
		cout << endl;
	}
}
