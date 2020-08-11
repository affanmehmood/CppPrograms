#include<iostream>
#include<string.h>
using namespace std;

template <class T>
T stradd(const T a, T b){
	return a>b?a:b;
	}


class pop{
	int men;
	int wom;
	public:
		pop(){
			men=1000;
			wom=2000;
		}
	void getpop(){
		cout<<"Population men "<<men<<" Women: "<<wom<<endl;
	}
};

class city{
	string isl;
	string rwp;
	public:
		city(){
			isl="Burgers";
			rwp="Pindi Boys";
		}
	void getcity(){
		cout<<"Isl is "<<isl<<endl;
		cout<<"Rwp is "<<rwp<<endl;
	}
};

class gov{
	string nawaz;
	city cobj;
	public:
		gov(){
			nawaz="Curropt";
		}
	void getgov(){
		cout<<"Nawaz is "<<nawaz<<endl;
	}
};

class nation: public pop, public city{
	public:
	gov govobj;
	public:
	void getnation(){
			pop::getpop();
			city::getcity();
			this->govobj.getgov();
		}
};

int main(){
	cout<<"Greater number is "<<stradd(34.78,44.76)<<endl;
	nation obj;
	obj.govobj.getgov();
	obj.getnation();
}
