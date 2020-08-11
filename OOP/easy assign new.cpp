#include<iostream>
#include<fstream>
using namespace std;
class student
{
	private:
	int id;
	string name;
	float gpa[20];
	int semister[20];
	int cont;
	public:
	void setData();
	friend void getdata(student *ptr, int lim);
	void deldata(string n);
	friend student* addata(student *ptr, int lim,int nlim);
	void editdata(string n);
	friend void writefun(student *ptr, int lim);   	
	friend void readfun(student *ptr, int lim);
	friend void searchfun(student *ptr, int lim);
	void getmemdata();

};
void student:: setData()
	{	
	cout << "Enter name of student: ";
	cin >> name;		
	cout << "Enter Id: ";
	cin >> id;
	for(int i=0;i<8;i++)
	{
	semister[i]=i+1;
	cout<<"Enter GPA of semister "<<i+1<<": ";
	cin>>gpa[i];
	}
	cout << "Enter contact number: ";
	cin >> cont;
	cout << endl<<endl;
	}
	
void student:: getmemdata(){
	cout<<"Name of the student is   "<<name<<endl;
	cout<<"ID of the student is    "<<id<<endl;
	cout<<"Contact of the student is: "<<cont<<endl;
	for(int k=0;k<8;k++){
	cout<<"GPA of Semister "<<semister[k]<<" is ";
	cout<<gpa[k]<<endl<<endl;
	}
	}
	
void getdata(student *ptr, int lim){
	for(int i=0; i<lim; i++)
	{
	cout<<"Name of the student is   "<<ptr->name<<endl;
	cout<<"ID of the student is    "<<ptr->id<<endl;
	cout<<"Contact of the student is: "<<ptr->cont<<endl;
	for(int k=0;k<8;k++){
	cout<<"GPA of Semister "<<ptr->semister[k]<<" is ";
	cout<<ptr->gpa[k]<<endl<<endl;
	}
	ptr++;
	}
	}
student* addata(student *ptr, int lim, int nlim){
	student *nptr,*temp,*ntemp;
	nptr=new student[nlim];
	ntemp=nptr;
	temp=ptr;
	
	for(int i=0; i<lim; i++){
	nptr->name=ptr->name;
	nptr->id=ptr->id;
	nptr->cont=ptr->cont;      
	for(int i=0;i<8;i++){
	nptr->semister[i]=i+1;
	nptr->gpa[i]=ptr->gpa[i];
	}
	nptr++;
	ptr++;
	}
	delete []temp;
	ptr=ntemp;
	ptr=ptr+lim;
	
	for(int i=0; i<nlim-lim; i++)
	{
	cout<<endl<<endl<<"ENTER NAME "<<i+1<<" ";
	cin>>ptr->name;
	cout<<"ENTER ID ";
	cin>>ptr->id;
	cout<<"ENTER CONTACT NO. ";
	cin>>ptr->cont;
	cout<<endl;
	for(int s=0;s<8;s++)
	{
	ptr->semister[s]=s+1;
	cout<<"ENTER GPA and SEMISTER ";
	cin>>ptr->gpa[s];
	} 
	cout<<endl<<endl; 
	ptr++;
	}
	return ntemp;
	}
void student:: deldata(string n)
{
	if(n==name){
	name="";
	id=0;
	cont=0;
	for(int i=0;i<8;i++)
	{
	semister[i]=0;
	gpa[i]=0;
	}
	cout<<endl<<endl;
}
}
void student::editdata(string n)
{   if(name==n){
	cout<<"Enter NAME: ";
	cin>>name;
	cout<<"Enter ID: ";
	cin>>id;
	cout<<"Enter CONTACT: ";
	cin>>cont;
	for(int i=0;i<8;i++)
	{
	cout<<"ENTER GPA OF SEMISTER: "<<semister[i]<<endl;
	cin>>gpa[i];
	}
}
	cout<<endl<<endl;
}
void writefun(student *ptr, int lim)
{
	
	ofstream ob;
	ob.open("thefile.txt");
	if(ob.is_open())
	{
	for(int i=0;i<lim;i++)
	{
	ob<<ptr->name<<" "<<ptr->cont<<" "<<ptr->id<<" ";
	for(int s=0;s<8;s++)
    {
	ob<<ptr->semister[s]<<" ";
	ob<<ptr->gpa[s]<<" "<<endl;
	} ptr++;
	}}
	ob.close();
}

void readfun(student *ptr, int lim)
{
	ifstream ob;
	ob.open("thefile.txt");
	if(ob.is_open()){
	while(!ob.eof()) 
	{
		ob >>ptr->name >>ptr->cont  >>ptr->id;
		for(int i=0;i<8;i++)
    {
	ob>>ptr->semister[i]>>ptr->gpa[i];
	} ptr++;  	     
	}
	}
	ob.close();
}

void searchfun(student *ptr, int lim)
{
	int x=0,ch=0;
	cout<<endl<<endl<<endl;
	cout<<"enter 1 to search by Name "<<endl;
	cout<<"enter 2 to search by GPA "<<endl;
	cout<<"enter 3 to see which students are above 3.5 GPA "<<endl;
	cout<<"enter 4 to see which students have warnings "<<endl;
	cout<<"enter 5 to see which students have serious warnings "<<endl;
	cin>>ch;
	switch(ch){
	case 1:
	{
	string s;
	cout<<"SEARCH BY NAME: ";
	cin>>s;
	for(int i=0; i<lim; i++)
	{
	if(ptr->name==s)
	{
	ptr->getmemdata();
	break;
	}
	ptr++;
	}
	break;
	}
	
	case 2:
	{
	int gp;
	cout<<"SEARCH BY GPA ";
	cin>>gp;
	for(int i=0; i<lim; i++)
	{
	for(int j=0;j<8;j++)
	{
	if(gp==ptr->gpa[j])
	{
	ptr->getmemdata();
	break;
	}
	}
	ptr++;
	}
	break;
	}
	
	case 3:
	{
	cout<<endl<<endl<<"Students above 3.5 GPA are "<<endl;
	for(int i=0;i<lim;i++)
	{
	for(int g=0;g<8;g++)
	{
	if(ptr->gpa[g]>3.5)
	{
	cout<<ptr->name<<" "<<ptr->id<<endl;
	break;
	}
	}
	ptr++;
	}
	break;
	}
	
	case 4:
	{
	cout<<endl<<endl;
	cout<<"                  **Serious Warnings Students** "<<endl;
	for(int i=0;i<lim;i++)
	{
	for(int g=0;g<8;g++)
	{
	if(ptr->gpa[g]<1.8)
	{
	cout<<ptr->name<<" "<<ptr->id<<endl;
	break;
	}
	}
	ptr++;
	}
	break;
	}
	
	case 5:
	{
	cout<<endl<<"             ***Under Warning Students***"<<endl;
	for(int i=0;i<lim;i++)
	{
	for(int g=0; g<8; g++)
	{
	if(ptr->gpa[g]<2 && ptr->gpa[g]>1.8)
	{
	cout<<ptr->name<<" "<<ptr->id<<endl;
	break;
	}
	}
	ptr++;
	}
	break;
	}
}
}
int main()
{
	student *ptr,*temp;
	int size, choice;
	cout << "Enter number of students: ";
	cin >> size;
	ptr = new student[size];
	temp=ptr;
	for(int i=0;i<size;i++)
	{
    ptr->setData();
    ptr++;
	}
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
	cin>>choice;
	switch (choice){
	case 1:{
	int nlim=0;
	cout<<"enter number of new students you want to enter ";
	cin>>nlim;
	nlim=size+nlim;
	ptr=addata(ptr,size,nlim);
	size=nlim;
	break;
	}
    
    case 2:{
	cout<<"Enter the Name of the student you want to delete form class: ";
	string s;
	cin>>s;
	for(int i=0;i<size;i++){
	ptr->deldata(s);
	}	
	break;}
	
	case 3:
	{	
	cout<<"Enter the name of the student you want to edit: ";
	string h;
	cin>>h;
	for(int i=0;i<size;i++)
	{
    ptr->editdata(h);
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
	getdata(ptr,size);
	break;
	}	
}
}while(choice!=0);
}
