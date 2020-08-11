#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
class school{
private: 
string name;
int ID,sem[8];
double GPA[8],con;
public:
void setdata();
friend void writefun(school *ptr,int lim);
void editfun(string n);
friend void searchfun(school *ptr, int lim);
void deletefun(string n);
friend void readfun(school *ptr,int lim);
void showfun();

};

void school :: setdata(){
	cout<<"Enter name: "<<endl;
	cin>>name;
	cout<<"enter ID: ";
	cin>>ID;
	for(int i=0;i<8;i++){
	sem[i]=i+1;
	cout<<"Enter GPA of semister "<<i+1<<": ";
	cin>>GPA[i];}
	cout<<endl<<endl;
	cout<<"enter contact: ";
	cin>>con;}
	
void school:: showfun(){
	cout<<"Student Name is: "<<name<<endl;
	cout<<"Student ID is: "<<ID<<endl;
	cout<<"Student Contact Information: "<<con<<endl;
	for(int i=0;i<8;i++){
	cout<<"Semister: "<<sem[i]<<endl;
	cout<<"GPA of semister "<<i+1<<": "<<GPA[i]<<endl<<endl<<endl;}}
	
void school:: deletefun(string n){
	if(name==n){
	name="";
	ID=0;
	con=0;
	for(int i=0;i<8;i++){
	sem[i]=0;
	GPA[i]=0;}
	cout<<endl;}}
void school::editfun(string n){if(n==name){
	cout<<"Enter new NAME: ";
	cin>>name;
	cout<<"Enter new ID: ";
	cin>>ID;
	cout<<"Enter new CONTACT: ";
	cin>>con;
	for(int i=0;i<8;i++){
	cout<<"ENTER NEW GPA OF SEM: "<<sem[i]<<endl;
	cin>>GPA[i];}}
	cout<<endl<<endl;}
	
void writefun(school *ptr,int lim){
	ofstream obj1;
	obj1.open("file.txt");
	if(obj1.is_open()){
	for(int i=0;i<lim;i++){
	obj1<<ptr->name<<" "<<ptr->ID<<" "<<ptr->con;
	for(int i=0;i<8;i++){
	obj1<<ptr->sem[i]<<" ";
	obj1<<ptr->GPA[i]<<" "<<endl;}}}
	obj1.close();}
	
void readfun(school *ptr,int lim){
	ifstream obj2;
	obj2.open("file.txt");
	if(obj2.is_open()){
	while(!obj2.eof()){
	obj2 >>ptr->name >>ptr->ID  >>ptr->con;
	for(int i=0;i<8;i++){
	obj2>>ptr->sem[i]>>ptr->GPA[i];}}}
	obj2.close();}
	
void searchfun(school *ptr, int lim){
	int j=0;
	cout<<"                                  MENU  "<<endl<<endl;
	cout<<"enter 1 to search by Name ";
	cout<<"enter 2 to search by GPA ";
	cout<<"enter 3 to see which students are above 3.5 GPA "<<endl;
	cout<<"enter 4 to see which students have warnings "<<endl;
	cout<<"enter 5 to see which students have serious warnings "<<endl;
	cin>>j;
	switch(j){
	case 1:{string h;
	cout<<"ENTER THE NAME OF THE REQUIRED STUDENT ";
	cin>>h;
	for(int i=0; i<lim; i++){
	if(ptr->name==h){
	ptr->showfun();
	break;}
	ptr++;}
	break;}
	
	case 2:{
	int gpa;
	cout<<"ENTER THE GPA OF THE STUDENT YOU WANT TO SEARCH ";
	cin>>gpa;
	for(int i=0; i<lim; i++){
	for(int k=0;k<8;k++){
	if(ptr->GPA[k]==gpa){
	ptr->showfun();
	break;}}
	ptr++;}
	break;}
	
	case 3:{
	cout<<endl<<endl;
	cout<<"Students with GPA above 3.5 are "<<endl;
	for(int i=0;i<lim;i++){
	for(int k=0;k<8;k++){
	if(ptr->GPA[k]>3.5){
	cout<<"Name: "<<ptr->name<<endl;
	break;}}
	ptr++;}
	break;}
	
	case 4:{
	cout<<endl<<endl;
	cout<<"Students who have Serious Warnings "<<endl;
	for(int i=0;i<lim;i++){
	for(int k=0;k<8;k++){
	if(ptr->GPA[k]<1.8){
	cout<<"Name: "<<ptr->name<<endl;
	break;}}
	ptr++;}
	break;}
	
	case 5:{cout<<endl<<"Names of the students Under Warning "<<endl;
	for(int i=0;i<lim;i++){
	for(int k=0;k<8;k++){
	if(ptr->GPA[k]<2 && ptr->GPA[k]>1.8){
	cout<<"Name: "<<ptr->name<<endl;
	break;}}
	ptr++;}
	break;}}}
	
int main(){
	int x=0;
	cout<<"enter the number of students ";
	int lim=0;
	cin>>lim;
	school stud[lim];
	do{
	cout<<"1 for adding students "<<endl;
    cout<<"2 for delete students "<<endl;
    cout<<"3 for updateing students "<<endl;
    cout<<"4 for saveing data "<<endl;
    cout<<"5 for repopulating data from a file "<<endl;
	cout<<"6 for searching students "<<endl;
	cout<<"7 for show data on the screen "<<endl;
    cout<<"7 to exit "<<endl;
	cin>>x;
	switch (x){
	case 1:{
		
	for(int i=0;i<lim;i++){
	stud[i].setdata();}
	break;}
    
    case 2:{
	cout<<"Enter the name of the student you want to DELETE: ";
	string h;
	cin>>h;
	for(int i=0;i<lim;i++){
	stud[i].deletefun(h);}
	break;}
	
	case 3:{cout<<"Enter the name of the student you want to edit: ";
	string h;
	cin>>h;
	for(int i=0;i<lim;i++){
	stud[i].editfun(h);}
	break;}	
	
	case 4:{school *ptr=stud;
	writefun(ptr,lim);
	break;}
	
	case 5:{
	school *ptr=stud;
	readfun(ptr,lim);
	break;}
	
	case 6:{
	school *ptr=stud;
	searchfun(ptr,lim);
	break;}
	
	case 7:{
	for(int i=0;i<lim;i++){
	stud[i].showfun();}
	break;}}
}while(x!=8);}
