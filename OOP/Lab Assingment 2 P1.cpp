#include<iostream>
using namespace std;
#include<string.h>

class ParkedCar;
class PoliceOfficer;
class ParkingTicket{
	protected:
	int fine;
	public:
	void getdata(){cout<<"Your Fine is "<<fine<<endl;}
	friend void checklegal(bool check,ParkedCar *ptr);
	ParkingTicket(){fine=0;}
};
class ParkingMeter{
	protected:
	double Pmin;
	public:
	ParkingMeter(){Pmin=0;}	
	void setdata(){cout<<"Enter the time you want to park your car here for in minutes "; cin>>Pmin;}
	void getdata(){cout<<"you bought "<<Pmin<<" minutes"<<endl;}
};
class ParkedCar : protected ParkingMeter, public ParkingTicket {
    protected:
	string name,model,color;
	int Lno,stime;
	public:
	double getpmin(){return Pmin;}
	int retfine(){return fine;}
	int getptime(){return stime;}	
	friend	void checklegal(bool check,ParkedCar *ptr);
	void setdata();
	void getdata();
	ParkedCar(){name=" "; model=" "; Lno=0; Pmin=0;}
};
void ParkedCar:: setdata(){
	cout<<"Enter car's makers name "; cin>>name;
	cout<<"Car's model "; cin>>model;
	cout<<"Enter cars color "; cin>>color;
	cout<<"Enter car's Lisence number "; cin>>Lno;
	ParkingMeter::setdata();
	cout<<"Enter time the car has been parked here "; cin>>stime;}
void ParkedCar::getdata(){
	cout<<"           CAR'S DATA"<<endl<<"Makers name "<<name<<endl;
	cout<<"Model number "<<model<<endl;
	cout<<"Cars color is "<<color<<endl;
	cout<<"Cars licence number is "<<Lno<<endl;
	ParkingMeter::getdata();
	cout<<"Spend time is "<<stime<<" minutes"<<endl;}
void checklegal(bool check,ParkedCar *ptr){
	int i=25;
	if(check==1){
	for(int k=1; k<24; k++){
	if(ptr->stime<=k*60){ptr->fine=i; break;}
	i=i+10;}}
	else if(check==0){ptr->fine=i;}}
class PoliceOfficer : public ParkedCar{
private:
string name;
int badge;
public:
	void setdata(){cout<<"Enter officers name "; cin>>name;
	cout<<"Enter officers badge number "; cin>>badge;}
	void getdata(){cout<<"Officers name is "<<name<<endl; 
	cout<<"Officers badge number is "<<badge<<endl;}
	bool check2(ParkedCar *ptr){if (ptr->getpmin()<=ptr->getptime()){return 1;}
	if(getpmin()>getptime()){return 0;}}
	void ticket(ParkedCar *ptr){ptr->getdata(); cout<<"Your fine is "<<ptr->retfine()<<endl;}
};
int main(){
  ParkedCar *ptr,*temp;
  int lim;
  bool check;
  cout<<"Enter the number of cars you want to enter in the system "; cin>>lim;
  ptr= new ParkedCar[lim];
  temp=ptr;
  for(int i=0; i<lim; i++){ptr->setdata(); ptr++;}
  	ptr=temp;
  PoliceOfficer *poli,*tempi;
  poli=new PoliceOfficer[lim];
  tempi=poli;
  for(int i=0; i<lim; i++){
  	poli->setdata();
  	check=poli->check2(ptr);
	checklegal(check,ptr);
	poli++;
	ptr++;}
	ptr=temp;
	poli=tempi;
	for(int i=0; i<lim; i++){
	poli->getdata();
	poli->ticket(ptr);
	poli++;
	ptr++;}
	poli=tempi;
	ptr=temp;}
