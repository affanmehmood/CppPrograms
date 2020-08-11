#include<iostream>
using namespace std;
#include<cstdlib>

void molddata(int *ptr, int count){
	for(int i=0; i<count; i++){
	if(*ptr<=4000 && *ptr>0){*ptr=1;}
	else if(*ptr>5500 && *ptr<=7000){*ptr=3;}
	else if(*ptr<=13500 && *ptr>7000){*ptr=2;}
	else if(*ptr>13500 && *ptr<=19000){*ptr=5;}
	else if(*ptr>19000 && *ptr<=22000){*ptr=4;}
	else if(*ptr>22000){*ptr=6;}
	ptr++;}}
void showdata(int *ptr, int count){
	for(int i=0; i<count; i++){
	cout<<*ptr<<endl;
	ptr++;}}
void showsdata(string *ptr, int count){
	for(int i=0; i<count; i++){
	cout<<*ptr<<endl;
	ptr++;}}
void inputstring(string *point, int *ptr, int count){
	for(int i=0; i<count; i++){
	if(*ptr==1){*point="Old shoe";}
	if(*ptr==2){*point="Gold key";}
	if(*ptr==3){*point="Gold fish";}
	if(*ptr==4){*point="Silver dagger";}
	if(*ptr==5){*point="White shark";}
	if(*ptr==6){*point="White pony";} ptr++; point++;}}
void check(string *ptr, int *pint, int count){
	for(int i=0; i<count; i++){
	if(*ptr=="Old shoe"){*pint=90;}
	else if(*ptr=="Gold key"){*pint=70;}
	else if(*ptr=="Gold fish"){*pint=120;}
	else if(*ptr=="Silver dagger"){*pint=30;}
	else if(*ptr=="White shark"){*pint=-110;}
	else if(*ptr=="White pony"){*pint=100;}
	ptr++; pint++;}}
int main(){
	int *ptr,*temp;
	ptr=new int[100];
	temp=ptr;
	int y=0,one=0,count=0;
	do{
	if(y==0){cout<<"Press 1 to roll the dice and start fishing! Press 0 to exit ";}
	if(y>0){cout<<"Press one again to roll again! ";}
	cin>>one;
	if(one==1){*ptr=rand(); ptr++; count++;}
	else{if(one!=0){cout<<"you pressed invalid number "<<endl;}}
	y++;
	if(one==0){break;}
	}while(one!=0);
	ptr=temp;
	molddata(ptr,count);
	cout<<"                  Your Dice numbers are "<<endl;
	showdata(ptr,count);
	string *point;
	point=new string[count];
	inputstring(point,ptr,count);
	check(point,ptr,count);
	cout<<"          Your Rewards are "<<endl;
	showsdata(point,count);
	cout<<"          Points are "<<endl;
	showdata(ptr,count);
	cout<<"	Congratulations!"<<endl<<"Total points are ";
	int x=0;
	for(int i=0;i<count; i++){
	x=x+*ptr;
	ptr++;}
	cout<<x;}
