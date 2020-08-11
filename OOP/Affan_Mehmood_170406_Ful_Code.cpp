#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

class myclass
{
	private:
		int id,sem[8];
		double gpa[8];
		double contact;
		string name;
		public:
		myclass();
		void setupdate();
		void showmemdata();
		friend void setdata(myclass *ptr, int lim); 
		friend void copydata(myclass *newptr,myclass *oldptr,int oldlim, int newlim);
		friend void inputnewdata(myclass *ptr,int oldlim, int newlim);		
		friend myclass* deletestudent(myclass *ptr, int lim);
		friend void copydeletedata(myclass *newptr,myclass *oldptr,int oldlim, int newlim);	
        friend void getdata(myclass *ptr, int lim);
        friend void updatedata(myclass *ptr, int lim);
        friend void savedata(myclass *ptr,int lim);
        friend void readdata(myclass *ptr);
        friend void searchdata(myclass *ptr, int lim);
};
myclass::myclass(){
	id=1;
	name="name";
	contact=0;
	for(int i=0;i<8;i++){sem[i]=1;
	gpa[i]=1;}}
	
void setdata(myclass *ptr, int lim){                  //passing pointer and lim of array to set data
	for(int i=0; i<lim; i++){
	cout<<endl<<endl<<"ENTER NAME OF THE STUDENT: ";
	cin>>ptr->name;
	cout<<"ENTER ID OF THE STUDENT: ";
	cin>>ptr->id;
	cout<<"ENTER CONTACT NUMBER OF THE STUDENT: ";
	cin>>ptr->contact;
	cout<<endl;
	for(int i=0;i<8;i++){
	ptr->sem[i]=i+1;
	cout<<"ENTER GPA OF SEMISTER "<<i+1<<": ";
	do{
	cin>>ptr->gpa[i];
	if(ptr->gpa[i]<0 || ptr->gpa[i]>4){
	cout<<"Please enter the correct GPA: ";}
}while(ptr->gpa[i]<0 || ptr->gpa[i]>4);
	} ptr++;}
	cout<<endl<<endl<<endl;
}

myclass* makestudent(int lim){
	myclass *ptr;
	int make;
	ptr=new myclass[lim];
	cout<<"Enter 1 to start a new data entry ";
	cout<<"OTHERWISE DEFAULT VALUES will be stored there('name'for name & '1' for ID)"<<endl;
	cout<<"YOU CAN UPDATE THEM FROM THE MAIN MENU "<<endl<<"ENTER ";
	cin>>make;
	if(make==1){
	setdata(ptr,lim);
	}
	return ptr;
	}

myclass* addstudent(myclass *ptr, int lim, int newlim){
	myclass *newptr;                  
    newptr=new myclass[newlim];
    copydata(newptr, ptr, lim, newlim);
    return newptr;
	}
		
void copydata(myclass *newptr,myclass *oldptr,int oldlim, int newlim){   //passing new limit to pass it to another function
	myclass *newtemp,*oldtemp;
	oldtemp=oldptr;
	newtemp=newptr;
	
	for(int i=0; i<oldlim; i++){
	newptr->name=oldptr->name;
	newptr->id=oldptr->id;
	newptr->contact=oldptr->contact;        //copying old array to the new bigger array and deleting it
	for(int i=0;i<8;i++){
	newptr->sem[i]=i+1;
	newptr->gpa[i]=oldptr->gpa[i];
	}
	newptr++;
	oldptr++;
	}
	delete []oldtemp;        //not *oldptr because it has moved
	inputnewdata(newtemp, oldlim, newlim);
	}

void inputnewdata(myclass *ptr,int oldlim, int newlim){
	ptr=ptr+oldlim;
	
	for(int i=0; i<newlim-oldlim; i++){
	cout<<endl<<endl<<"ENTER NAME OF THE NEW STUDENT NUMBER "<<i+1<<": ";
	cin>>ptr->name;
	cout<<"ENTER ID OF THE STUDENT NUMBER "<<i+1<<": ";
	cin>>ptr->id;
	cout<<"ENTER CONTACT NUMBER OF THE STUDENT NUMBER "<<i+1<<": ";
	cin>>ptr->contact;
	cout<<endl;
	for(int k=0;k<8;k++){
	ptr->sem[k]=k+1;
	cout<<"ENTER GPA OF STUDENT NUMBER "<<i+1<<" and "<<" SEMISTER "<<k+1<<": ";
	do{
	cin>>ptr->gpa[k];
	if(ptr->gpa[k]<0 || ptr->gpa[k]>4){
	cout<<"Please enter the correct GPA: ";}
    }while(ptr->gpa[k]<0 || ptr->gpa[k]>4);
	
	} cout<<endl<<endl<<endl; 
	ptr++;}
}

myclass* deletestudent(myclass *ptr, int lim){
	myclass *newptr,*temp;
	int newlim=lim-1;                  
    newptr=new myclass[newlim];
    copydeletedata(newptr, ptr, lim, newlim);
    return newptr;
}
void copydeletedata(myclass *newptr,myclass *oldptr,int oldlim, int newlim){
	cout<<"Enter ID of the student you want to delete: ";
	int did;
	cin>>did;
	myclass *oldtemp;
	oldtemp=oldptr;
	
	for(int i=0; i<newlim; i++){
	if(did==oldptr->id){oldptr++;}
	newptr->name=oldptr->name;
	newptr->id=oldptr->id;
	newptr->contact=oldptr->contact;        //copying old array to the new bigger array and deleting it
	for(int i=0;i<8;i++){
	newptr->sem[i]=i+1;
	newptr->gpa[i]=oldptr->gpa[i];
	}
	oldptr++;
	newptr++;}
	delete []oldtemp;
}
void updatedata(myclass *ptr, int lim){
	cout<<"Press 1 to EDIT by Name, 2 to EDIT by ID ";
	int j;
	cin>>j;
	if(j==1){string s;
	cout<<"Enter the Student NAME you want to update data of: ";
	cin>>s;
	for(int i=0; i<lim; i++){
	if(s==ptr->name){
	ptr->setupdate();
	break;
	}
}
}
	else if(j==2){
	int fid;
	cout<<"Enter the Student Id you want to update data of: ";
	cin>>fid;
	for(int i=0; i<lim; i++){
	if(fid==ptr->id){
	ptr->setupdate();
	break;
	}
	}}
	else{cout<<"No such student found in the records "<<endl<<endl;
	}
}
void myclass:: setupdate(){
	cout<<"Enter new Name for "<<name<<": ";
	cin>>name;
	cout<<"Enter ID you want to edit: ";
	cin>>id;
	cout<<"Enter new Contact for "<<name<<": ";
	cin>>contact;
	for(int i=0;i<8;i++){
	cout<<"Enter semister: ";
	cin>>sem[i];
	cout<<"Enter new GPA for this semister: ";
	cin>>gpa[i];
	cout<<endl;
	}
}
void savedata(myclass *ptr,int lim){
	cout<<"                                              *WRITING*"<<endl<<endl<<endl;                                   
	char filename[50];
	cin.ignore();
	cout<<"Enter file name you want to write in the data:  ";
	cin.getline(filename, 50);
	cout<<endl;
	
	ofstream obj(filename);    //directly open technique
	if(obj.is_open()){
	for(int i=0;i<lim;i++){
	obj<<ptr->name<<" "<<ptr->contact<<" "<<ptr->id<<endl;  //storing data in the same file bacause we know the storing pattren
	for(int s=0;s<8;s++){
	obj<<ptr->sem[s]<<" "<<ptr->gpa[s]<<endl;}
	ptr++;}}
	obj.close();}
void readdata(myclass *ptr){
	cout<<"                                              *READING*"<<endl<<endl<<endl;
	cout<<"Enter file name you want to read data    ";
	char filename[50];
	cin.ignore();
	cin.getline(filename, 50);
		
	 ifstream obj(filename); //directly open technique
		
	if(!obj.is_open()){           //prevents from crashing
	exit(EXIT_FAILURE);}
		
	while(!obj.eof()){
	obj>>ptr->name>>ptr->contact>>ptr->id;
	for(int s=0;s<8;s++){
	obj>>ptr->sem[s]>>ptr->gpa[s];}	ptr++;}
	obj.close();} 

void searchdata(myclass *ptr, int lim){
	int x=0;
	cout<<"                                           *SEARCH MENU*"<<endl<<endl<<endl;
	cout<<"Press 1 to search by Name,"<<endl<<"Press 2 to search by GPA, ";
	cout<<"Press 3 to see which students scored GPA more than 3.5, "<<endl;
	cout<<"Press 4 to see which students are under Serious Warning, "<<endl;
	cout<<"Press 5 to see which students are under Warning"<<endl;
	cin>>x;
	switch(x){
	case 1:{string naam;
	cout<<"ENTER THE NAME OF THE STUDENT YOU WANT TO SEARCH ";
	cin>>naam;
	for(int i=0; i<lim; i++){
	if(ptr->name==naam){
	ptr->showmemdata();
	break;}
	ptr++;
	}
	break;}
	
	case 2:{int GP;
	cout<<"ENTER THE GPA OF THE STUDENT YOU WANT TO SEARCH ";
	cin>>GP;
	for(int i=0; i<lim; i++){
	for(int g=0;g<8;g++){
	if(ptr->gpa[g]==GP){
	ptr->showmemdata();
	break;}}
	ptr++;}
	break;}
	
	case 3:{cout<<endl<<endl<<"Names of the students with GPA above than 3.5 are "<<endl;
	for(int i=0;i<lim;i++){
	for(int g=0;g<8;g++){
	if(ptr->gpa[g]>3.5){
	cout<<"Name: "<<ptr->name<<" ID: "<<ptr->id<<" GPA: "<<ptr->gpa[g]<<endl;
	break;}}
	ptr++;}
	break;}
	
	case 4:{cout<<endl<<endl<<"Names of the students with Serious Warnings "<<endl;
	for(int i=0;i<lim;i++){
	for(int g=0;g<8;g++){
	if(ptr->gpa[g]<1.8){
	cout<<"Name: "<<ptr->name<<" ID: "<<ptr->id<<" GPA: "<<ptr->gpa[g]<<endl;
	break;}}
	ptr++;}
	break;}
	
	case 5:{cout<<endl<<"Names of the students Under Warning "<<endl;
	for(int i=0;i<lim;i++){
	for(int g=0;g<8;g++){
	if(ptr->gpa[g]<2 && ptr->gpa[g]>1.8){
	cout<<"Name: "<<ptr->name<<" ID: "<<ptr->id<<" GPA: "<<ptr->gpa[g]<<endl;
	break;}}
	ptr++;}
		break;
	}
	}}
void myclass:: showmemdata(){
    cout<<"Name is of the searched student is "<<name<<endl;
	cout<<"ID is "<<id<<endl;
	for(int k=0;k<8;k++){
	cout<<"The GPA of Semister "<<sem[k]<<" is "<<gpa[k]<<endl;}
	cout<<"Contact is: "<<contact<<endl<<endl;
}

int inputx(){       //input function to make main function shorter
	int x=0;
	do{
	cin>>x;
	if(x==0){
	break;
	}
	else if(x<1 || x>8){
	cout<<"ENTER A NUMBER BETWEER 1-8: ";}
	} while(x<1 || x>8);
	return x;
}
void getdata(myclass *ptr, int lim){
	for(int i=0; i<lim; i++){
	cout<<"Name is "<<ptr->name<<endl;
	cout<<"ID is "<<ptr->id<<endl;
	for(int k=0;k<8;k++){
	cout<<"The GPA of Semister "<<ptr->sem[k]<<" is "<<ptr->gpa[k]<<endl;}
	cout<<"Contact is: "<<ptr->contact<<endl<<endl;
	ptr++;
}
}
int main(){
	myclass *ptr;
	
	cout<<"                                                 *INITIAL DATA ENTRY* "<<endl<<endl<<endl;
	cout<<"Enter number of students you want to enter "<<endl<<"Enter: ";
	
	int lim;
	cin>>lim;
	ptr = makestudent(lim);
	system("CLS");
	int x=0;
	
	do{
	cout<<"                                                  *MAIN MENU* "<<endl<<endl<<endl;
	cout<<"Press 1 to add new (more) students,"<<endl;
    cout<<"Press 2 to delete existing students,"<<endl;
    cout<<"Press 3 to update data,"<<endl;
    cout<<"Press 4 to save,"<<endl;
    cout<<"Press 5 to retrieve data from file,"<<endl;
	cout<<"Press 6 to delete all the data, "<<endl;
	cout<<"Press 7 to search for students, "<<endl;
	cout<<"Press 8 to show data, "<<endl<<"Press 0 to exit. "<<endl<<"Enter: ";
	x=inputx();	int del=0; int make=0;
	cout<<endl<<endl;
    
	switch (x){
	case 1:{int newlim=0;
	cout<<"Enter NUMBER of new students you want to input: ";
	cin>>newlim;
	newlim+=lim; 
	ptr=addstudent(ptr,lim,newlim);
	lim+=newlim;
	system("CLS");
	cout<<"                                  Fetching Data..."<<endl<<endl<<endl;
	getdata(ptr,newlim);
    break;}
    
    case 2:{ptr=deletestudent(ptr,lim);
	lim=lim-1;
	system("CLS");
	cout<<"                                  *DATA OF REMAINING STUDENTS*"<<endl<<endl<<endl;
	getdata(ptr,lim);
	break;}
	
	case 3:{updatedata(ptr,lim);
	system("CLS");
	getdata(ptr, lim);	
	break;}	
	
	case 4:{savedata(ptr,lim);
	break;}
	
	case 5:{cout<<"                                       *OVERWRITE WARNING*"<<endl;
	cout<<"  ***Number of students in the file must be equal or less than the no of students currently present in the program***"<<endl;
	system("CLS");
	readdata(ptr);
	break;}
	
	case 6:{cout<<"                                *ALL THE DATA WILL BE LOST IF NOT SAVED*"<<endl;
	cout<<"                                             *PRESS 6 AGAIN TO DELETE* "<<endl;
	cin>>del;
	if(del==6){delete []ptr;}
	cout<<"Enter the number of students: ";
	cin>>lim;
	ptr=new myclass[lim];
	cout<<"Enter 1 to start a new data entry ";
	cout<<"OTHERWISE DEFAULT VALUES will be stored there('name'for name & '1' for ID)"<<endl;
	cout<<"YOU CAN UPDATE THEM FROM THE MAIN MENU "<<endl<<"ENTER: ";
	cin>>make;
	if(make==1){
	system("CLS");
	setdata(ptr,lim);
	}
	break;}
	
	case 7:{system("CLS");
	searchdata(ptr,lim);
	break;}
	
	case 8:{system("CLS");
	getdata(ptr,lim);
	break;}	
}
}while(x!=0);
}
