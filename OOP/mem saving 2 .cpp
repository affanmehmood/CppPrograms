#include<iostream>
#include<fstream>
using namespace std;

int p=1;
class A{
	int x,y,z;
	public:
		
		void savefile(ofstream &inn, ofstream &in, ofstream &i){
			inn<<x<<endl;
			in<<y<<endl;
			i<<z<<endl;
		}
		
		A(){x=p; y=p+1; z=p+2; p++;}
};

int main(){
	A array[10];
	
	ofstream inn,in,ip;
	inn.open("filex.txt");
	in.open("filey.txt");
	ip.open("filez.txt");
	
	for(int i=0; i<10; i++){
		array[i].savefile(inn,in,ip);
	}
	inn.close();
	in.close();
	ip.close();
}
