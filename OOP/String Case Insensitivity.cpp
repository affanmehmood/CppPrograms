#include<iostream>
#include<string>
using namespace std;
string uppercaseIt(string s);


int main(){
	string x="Fight Club",y=" ";
	
	getline(cin,y);
	
	if(uppercaseIt(x).compare(uppercaseIt(y))==0){
		cout<<"Same";
	}
	else{
		cout<<"different";
	}
}

string uppercaseIt(string s){
	string convorted;
	for (short i=0; i<s.length(); ++i){
		
		convorted+=toupper(s[i]);
		
		}
		return convorted;
}
