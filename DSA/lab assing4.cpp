#include <iostream>
using namespace std;
int gHGS(int GTT[6][6], int r,int c);

int main(){
int GTT[6][6],r=6,c=6,hR,hC;

for(int i=0;i<6;i++){
	for(int j=0;j<6;j++){
	cin>>GTT[i][j];
}
}
int hHGS=GTT[0][1];

for(int i=0 ;i<r-2;i++){
	int hGS=0;
	for(int j=1; j<c; j++){
		hGS = gHGS(GTT,i,j);
		if(hGS>hHGS){
			hHGS = hGS;
			hR=i;
			hC=j;
		}
		cout<<hGS<<endl;
	}
	cout<<endl;
}
}

int gHGS(int GTT[6][6], int r,int c){
	int hGS = GTT[r][c-1] + GTT[r][c] + GTT[r][c+1] + GTT[r+1][c] + GTT[r+2][c-1] + GTT[r+2][c] + GTT[r+2][c+1];
	return hGS;
}
