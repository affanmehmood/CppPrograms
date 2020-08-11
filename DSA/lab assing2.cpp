#include <iostream>
using namespace std;
void check(string *in,int *out,int s);

int main(){
	string query[3]={"ab","bc","abc"};
	int result[3]={0,0,0};
	
	int s;
	cout<<"enter number of inputs "; cin>>s;
	string input[s];
	
	cout<<"enter inputs "<<endl;
	for(int i=0;i<s;i++)
	cin>>input[i];
	
	check(input,result,s);
	
	cout<<result[0]<<" , "<<result[1]<<" , "<<result[2];
	
}

void check(string *in,int *out,int s){
	for(int i=0;i<s;i++){
		if(in[i]=="ab"){
			out[0]++;
		}
		else if(in[i]=="bc"){
			out[1]++;
		}
		else if(in[i]=="abc"){
			out[2]++;
		}		
	}
}
