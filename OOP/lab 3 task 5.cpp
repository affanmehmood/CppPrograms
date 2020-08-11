#include<iostream>
#include<string.h>
using namespace std;

class employee 
{   
public:
	string name;
	int id;
	string depart;
	string position;
	
	employee(string x, int y, string z, string w)
	{
		name=x;
		id=y;
		depart=z;
		position=w;		
	}
	
	employee(string x, int y)
	{
	     name=x;
	     id=y;
	     depart="";
	     position="";
	}
	
	employee()
	{
		
	}
	
	void setId()
	{
		cout << "Enter id: " << endl;
		cin >> id;
	}

    void setName()
    {
    	cout << "Enter a name: " << endl;
    	cin >> name;
    
	}
	
	void setDepart()
	{
		cout << "Enter Department: " << endl;
		cin >> depart;
	}

    void setposition()
	{
		cout << "Enter position: " << endl;
		cin >> position;
	}



	void getId()
	{
		cout << "Id: " << id << endl;
	}

    void getName()
    {
    	cout << "Name: " << name << endl;
	}
	
	void getDepart()
	{
	cout << "Department: " << depart << endl;
	}

    void getposition()
	{
		cout << "Position: " << position << endl;
	}
	
	void output()
	{
	    cout << "Id: " << id << endl;
	    cout << "Name: " << name << endl;	
	    cout << "Department: " << depart << endl;
		cout << "Position: " << position << endl;
	}
};


int main ()
{
	employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
	employee emp2("Mark Jones", 39119, "IT", "Programmer");
	employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");
	
	cout << "Information of employee 1: " << endl ;
	emp1.output();
	 cout<< endl ;
	
	cout << "Information of employee 2: " << endl ;
	emp2.output(); cout<< endl ;
	
	cout << "Information of employee 3: " << endl ;
	emp3.output(); cout<< endl ;
	
	}
