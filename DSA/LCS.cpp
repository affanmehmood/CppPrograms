#include<iostream>
using namespace std;

string substring(string s, int i, int k){
	string r="";
	
	for(int l=i; l<=k; l++){
		r+=s[l];
	}
	return r;
}

int call(string one, string two){	
	int n=0;
	for(int i=0; i<one.size(); i++){
		if(two == substring(one, i, i+two.size()-1))
			n++; i+=two.size(); // for one timers
	}
	return n;
}
int call2(string one, string two){
	int count=0, a=0, match=0;
	for(int i = 0; i<one.length(); i++){
		if(one[i] == two[a]){
			count++; a++;
		} else{
			count=0; a=0;
		}
		if(two.length()==count)
		{
			match++;
			cout<<"matched";
		}
	}
}

int main(){
	string one="afafafafafafafa",two="afa";
	int n = call2(one,two);
	cout<<n;
}
