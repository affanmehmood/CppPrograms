#include<iostream>
using namespace std;

int main(){
	int check = 0;
	string Q[8][8];
	
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++) //loop to initialize the array with dots
		Q[i][j] = " . ";
	}
	
	for (int i = 0; i < 8; i++)
	{
		do {
			cout << "Enter Row " << i << endl;

			cin >> check;
		} while (check>7 || check<0); //to mskr sure user enters correctly
		Q[0][i] = " . ";   //to give dots to all rows of coloumn 0
		Q[check][i] = " Q "; //to give Qs to coloums in the array
	}

	for (int i=0; i<8; i++)
	{
		for (int j=0; j<8; j++) //print loop
		cout << Q[i][j];
		cout << endl;
	}
}
