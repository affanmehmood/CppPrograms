#include<iostream>
#include<cmath>
#include<fstream>
#include<cstdlib>
using namespace std;
class team
{
   public: //if you want to make these variables private then you'd have to use member funs
   float inches;
   float feet; 
   string bekar; //bekar means name
   team(int x=0, int y=0, string z=""){
    inches=x;
   	feet=y;
   	bekar=z;}
	void setdata();
	~team();
};

team :: ~team()
{
	cout<<"        LAST ONE";
}
int n=1;

void team :: setdata()
{
	cout<<"enter inches, feet and name "<< "of "<<n<<" player respectively "<<endl;
	cin>>feet>>inches>>bekar;
	n++; 
}

int main()
{   
	int x;
	cout<<"ENTER LIMIT OF OBJECTS    ";
	cin>>x;
	team o1[x];
	
	for(int i=0;i<x;i++)
	{
	o1[i].setdata();
}
	char filename[50];
	cout<<"Enter the file name you want to WRITE in"<<"\t"<<endl;
	
	cin.ignore(); 
	cin.getline(filename, 50);
	
	ofstream affan;
	affan.open(filename);
	if(affan.is_open())
	{
		for(int i=0; i<x; i++ )
		{
			affan<<o1[i].bekar<<endl;
			affan<<o1[i].feet<<endl;           //WRITING FILE 1 IN STYLE 1
			affan<<o1[i].inches<<endl;
		}
	}
	affan.close();
	
	
	char tfilename[50];
	cout<<"Enter another file name you want to WRITE in"<<"\t"<<endl;
	cin.getline(tfilename, 50);
	affan.open(tfilename);
	for(int i=0; i<x; i++)
	{
		affan<<o1[i].bekar<<"\t"<<"good boy"<<endl;
		affan<<o1[i].feet<<"\t"<<"feet"<<endl;                    //WRITING FILE 2 IN STYLE 2
		affan<<o1[i].inches<<"\t"<<"inches"<<endl;
	}
	affan.close();
	
	cout<<endl<<endl<<endl<<endl<<"            NOW READING......"<<endl<<endl<<endl<<endl;
	  
	                                     //READING PART
	  
	  
    char filenam[50];
    cout<<"Enter the file name you want to open"<<"\t"<<endl;
	
	
	cin.getline(filenam, 50);
	
	ifstream afan;
	afan.open(filenam);
	
	if(!afan.is_open()) //exit if not open, assosiaded with cstdlib header file
	{
		exit(EXIT_FAILURE);
	}
	while(!afan.eof()) //loop runs until file pointer reaches end of file
	{
		int i=0;
		afan >> o1[i].bekar >> o1[i].feet>> o1[i].inches;  //READING FILE 1 OF STYLE 1
		cout<<"Name is "<<o1[i].bekar<<"\t"<<"He is "<<o1[i].feet<<" feet and "<< o1[i].inches<<" inches tall"<<endl;
		     //SAME RESULT WILL BE SHOWN BECAUSE COUT STATEMENT IS SAME IN BOTH READING METHODS
		i++;
	}
	afan.close();
	
	char filena[50];
    cout<<"Enter another file name you want to open"<<"\t"<<endl;
	cin.getline(filena, 50);
	
	afan.open(filena);
	for(int i=0; i<x;i++)
	{
		if(afan!="good boy"|| afan!="feet" || afan!="inches" )
		{
			afan>>o1[i].bekar>>o1[i].feet>>o1[i].inches; //READING FILE 2 OF STYLE 2
		}
		cout<<"Name is "<<o1[i].bekar<<"\t"<<"He is "<<o1[i].feet<<" feet and "<< o1[i].inches<<" inches tall"<<endl;
		     //SAME RESULT WILL BE SHOWN BECAUSE COUT STATEMENT IS SAME IN BOTH READING METHODS
	}

}
                    //CHECK YOUR TXT FILES AFTER EXECUTION FOR UNDERSTANDING
