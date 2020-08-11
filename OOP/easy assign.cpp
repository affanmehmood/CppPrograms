#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
	int id;
	char name[40];
	float gpa[20];
	int semester[20];
	int contNum;
	public:
	void setData()
	{	
	cout << "Enter name of student: ";
	cin >> name;		
	cout << "Enter Id: ";
	cin >> id;		
	cout<<"Enter how many semister the student studied ";
	cin>>x;
	for(int i=0;i<x;i++)
	{
	sem[i]=i+1;
	cout<<"Enter GPA of semister "<<i+1<<": ";
	cin>>GPA[i];
	}
	cout << "Enter contact number: ";
	cin >> contNum;
	}   	
};

int main()
{
	student *ptr,*temp;
	int size, choice;
	cout << "Enter number of students: ";
	cin >> size;
	ptr = new student[size];
	for(int i=0;i<size;i++){
    ptr->setData();
    ptr++;}
    ptr=temp;
	do{
	cout << "Options:\n";
	cout << "press 1 to Enter New student: \n";
	cout << "\npress 2 delete students: \n";
	cout << "Press 3 to Edit data: \n";
	cout<<"Press 4 to save: \n";
    cout<<"Press 5 to repopulate data from a file: \n";
	cout<<"Press 6 to search students: \n";
	cout<<"Press 7 to show data on the screen: \n";
	cout<<"Press 0 to exit: \n"<<"Select: ";
	cin>>x;
	switch (x){
	case 1:{
		
	for(int i=0;i<size;i++)
	{
	ptr->addata();
	}
	break;}
    
    case 2:{
	cout<<"Enter the ID of the student you want to delete form class: ";
	string s;
	cin>>s;
	for(int i=0;i<size;i++){
	ptr->deletests(s);
	}
		
	break;}
	
	case 3:
	{	
	cout<<"Enter the name of the student you want to edit: ";
	string h;
	cin>>h;
	for(int i=0;i<size;i++)
	{
	   ptr->editsts(h);
	}
	break;
	}	
	
	case 4:
	{
	writefun(ptr,size);	
    break;
	}
	
	case 5:
	{
	readfun(ptr,size);
	break;
	}
	
	case 6:
	{
	    searchfun(ptr,size);
	break;
	}
	
	case 7:
	{
		for(int i=0;i<size;i++)
	{
		getdata();
	}
	break;
	}	
}
}while(x!=0);
}
