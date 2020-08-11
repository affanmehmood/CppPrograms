#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
class b2{
	private:
	int roll;
    public:
	string name;
	b2(string x, int y);
	~b2();
	friend istream &operator >> (istream &input, b2 &obj);
	friend ostream &operator << (ostream &output, b2 &obj);
    int retroll();
    void enteroll(int x);
};
b2:: ~b2()
{
	cout<<"       KESA LGA?";
}
b2:: b2(string x="", int y=0){
	name=x;
	roll=y;}
	
int b2:: retroll(){
	return roll;    
 }
void b2::  enteroll(int x){
	roll=x;
}
istream &operator >> (istream &input, b2 &obj){
	cout<<"Enter the name of the student ";
	input>>obj.name;                                 //STREAM OPERATOR USE
	cout<<"Enter the roll number of the student ";
	input>>obj.roll;
}
ostream &operator << (ostream &output, b2 &obj){
	output<<"The name of the student is "<<obj.name<<endl;
	output<<"The roll number of the student is "<<obj.roll<<endl;
}

int main(){
	int lim;
	cout<<"Enter the strength of the class ";
	cin>>lim;
	b2 *ptr, *temp;
	
	ptr = new b2[lim];                //SINGLE POINTER POINTING DYNAMIC ARRAY OF OBJECTS
	temp=ptr;
	
	for(int i=0;i<lim;i++){
	cin>>*temp;         //istream operator >> called 
	temp++;
	}
	temp=ptr;
	
	                                   //WRITING TO A TXT FILE
	cout<<"                      WRITING"<<endl;                                   
	char filename[50];
	cin.ignore();
	cout<<"Enter file name you want to write in the data    ";
	cin.getline(filename, 50);
	cout<<endl;
	    
	ofstream obj(filename);  //directly open technique
	if(obj.is_open()){
	for(int i=0;i<lim;i++){
	obj<<temp->name<<" "<<temp->retroll()<<endl;
	temp++;
	}
	}
	temp=ptr;
	obj.close();
		                             //READING FROM A FILE INTO THE OBJECTS (REPOPULATING)
	cout<<"                      READING"<<endl;
	cout<<"Enter file name you want to read data    ";
	cin.getline(filename, 50);
		
	ifstream obj1(filename); //directly open technique
	int x=0;
		
	if(!obj1.is_open()){
	exit(EXIT_FAILURE);
	}
		
	while(!obj1.eof())
	{
	obj1>>temp->name>>x;     //roll number is private, so this is a technique to store its value back into obj
	temp->enteroll(x);
		
	temp++;
	}
		
	temp=ptr;
	obj1.close(); 
		
	cout<<"                     THIS IS AFTER READING DATA BACK TO OBJECTS FROM THE FILE"<<endl;
	cout<<"                     CHECK YOUR TXT FILE "<<endl;
		
	for(int i=0;i<lim;i++){
	cout<<*temp;       //ostream operator << called 
	temp++;
	}
	temp=ptr;
	return 0;
}
