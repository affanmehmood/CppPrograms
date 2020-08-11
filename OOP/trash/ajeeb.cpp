#include<iostream>
using namespace std;
class emp
{ 
public:
string name;
int id;
string dep;
string pos;

 emp(string n, int i, string d, string p)
 {
 	name = n;
 	id = i;
 	dep = d;
 	pos = p;
 	
 }
 emp(string n, int i)
 {
 	name = n;
 	id = i;
 	dep = "";
 	pos = "";
 	
 }
 emp()
 {
 } 
 string nsetfun();
 void ngetfun();
};

string emp :: nsetfun()
{
	string x;
	cin>>x;
	return x;
}
void emp :: ngetfun()
{
	cout<<name;
}
int main()
{
	emp o1;
	o1.name = o1.nsetfun();
	o1.ngetfun();
}

