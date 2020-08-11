#include<iostream>
#include<fstream>
using namespace std;

int p=1;
class A{
	int x;
	public:
		
		savefile(ofstream &inn){
			inn<<x<<endl;
		}
		
		A(){x=p; p++;}
};

int main(){
	A array[10];
	
	ofstream inn;
	inn.open("file.txt");
	for(int i=0; i<10; i++){
		array[i].savefile(inn);
	}
	
	inn.close();

}
