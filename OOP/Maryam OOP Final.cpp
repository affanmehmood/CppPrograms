#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Flight
{
	protected:
		string flight_number;
		string name; 
		int seats;
        public:
        	Flight()
        	{		
			}
        	Flight(string num,string x, int y) 
        	{
        		flight_number=num;
        		name=x;
        		seats=y;
        	}
        	void setName()
        	{
        		cout << "Enter name of flight" << endl;
        		cin>>name;
			}
			void setSeats()
			{
				cout <<"Enter number of seats in plane"<<endl;
				cin>> seats;
			}
			string getName()
			{
				return name;
			}
			int getSeats()
			{
				return seats;
			}
			string getFlightNumber()
			{
				return flight_number;
			}
			void setFlightNumber()
			{
				cout<<"Enter Flight Number"<<endl;
				cin>>flight_number;
		}
		void seattaken()
		{
			seats --;
		}
		void seatCancel()
		{
			seats++;
		}
};
class Schedule: public Flight
{
		protected:
		string aTime, dTime;
		string aPlace, dPlace, aDate,dDate;
	public:
		Schedule(string aP, string dp, string ad, string dD, string aT, string dT )
		{
			aPlace=aP;
			dPlace=dp;
			aDate=ad;
			dDate=dD;
			aTime=aT;
			dTime=dT;
			}
			Schedule()
			{
			}
			void data()
			{ string n, f_n,s;
			n=getName();
			s=getSeats();
			f_n=getFlightNumber();
		}
		void set_aTime()
		{
			cout<<"Enter arrival time"<<endl;
			cin>>aTime;
		}
		void set_dTime()
		{
			cout<<"Enter departure time"<<endl;
			cin>>dTime;
		}
		void set_aDate()
		{
			cout<<"Enter arrival date"<<endl;
			cin>>aDate;
		}
		void set_dDate()
		{
			cout<<"Enter departure date"<<endl;
			cin>>dDate;
		}
		void set_aPlace()
		{
			cout<<"Enter arrival place"<<endl;
			cin>>aPlace;
		}
		void set_dPlace()
		{
			cout<<"Enter departure place"<<endl;
			cin>>dPlace;
		}
		string get_aPlace()
		{
			return aPlace;
		}
		string get_dPlace()
		{
			return dPlace;
		}
		string get_aDate()
		{
			return aDate;
		}
		string get_dDate()
		{
			return dDate;
		}
		string get_aTime()
		{
			return aTime;
		}
		string get_dTime()
		{
			return dTime;
		}
		void Display()
		{
			cout<<"Shedule of flight"<< endl;
				getName();
			getSeats();
			getFlightNumber();
			 get_aPlace();
			  get_dPlace();
			   get_aDate();
			    get_dDate();
			     get_aTime();
			      get_dTime();
		}
};
class Passenger: public Schedule
{
		protected:
		string PassengerName, phoneNo;
		string passportNo;
		string pet;
		int luggage_weight;
		string seatNumber;
		public:
				Passenger(string x, string y, string z,string num)
				{
					PassengerName=x;
					phoneNo=y;
					passportNo=z;
					seatNumber=num;
				}
				Passenger ()
				{
					
				}
				
			void setPassengerName()
			{
				cout <<"Enter Passenger name"<<endl;
				cin>> PassengerName;
			}
			void setPhoneNo()
			{
				cout<<"enter phone number"<<endl;
				cin>>phoneNo;
			}
			void setPassport()
			{
				cout <<"Enter passport number"<<endl;
				cin>> passportNo;
			}
			void setSeatnumber()
			{
				cout<<"Enter SeatNumber booked";
				cin>>seatNumber;
			}
			string getSeatNumber()
			{
				return seatNumber;
			}
			string getPassengerName()
			{
				return PassengerName;
			}
			string getPhoneNo()
			{
				return phoneNo;
			}
			string getPassport()
			{
				return passportNo;
			}
			void set_pet()
			{
				cout<<"enter pets"<<endl;
				cin>>pet;
			}
			string get_pet()
			{
				return pet;
			}
			void set_luggage()
			{
				cout<<"enter luggage weight"<<endl;
				cin>>luggage_weight;
			}
			int get_luggage()
			{
				return luggage_weight;
			}
			
			void show()
			{
				cout<<"Name ="<<PassengerName<<endl;
				cout<<"Phone number ="<<phoneNo<<endl;
				cout<<"Passport number ="<<passportNo<<endl;
				cout<<"Phone number ="<<phoneNo<<endl;
				
			}
};
class Ticket: public Passenger
{
	protected:
		string number;
		public:
			void setNumber()
			{
				Display();
				cout <<"Enter flight number"<<endl;
				cin>>number;
			}
			string getNumber()
			{
				return number;
			}
};
class Admin:public Ticket
{
	protected:
	string UserName, Password;
	public:
	Admin()
       	{
       		UserName="admin";
       		Password="1234";
		}
	string getUserName()
	{
		return UserName;
	}
	string getPassword()
	{
		return Password;
	}
	void addFlight()
	{
		setName();
		setSeats();
		setFlightNumber();
		set_aPlace();
	    set_dPlace();
		set_aDate();
		set_dDate();
		set_aTime();
		set_dTime();
	}
	void fileWriting()
			{
				ofstream myFile;
				myFile.open("Flight.txt");
				myFile<<flight_number<<endl;
				myFile<<name<<endl;
				myFile<<seats<<endl;
				myFile.close();
				
				myFile.open("Schedule.txt");
				myFile<<aPlace<<endl;
				myFile<<dPlace<<endl;
			    myFile<<aDate<<endl;
			    myFile<<dDate<<endl;
			    myFile<<aTime<<endl;
			    myFile<<dTime<<endl;
			    myFile.close();
			    
				myFile.open("Passenger.txt");
			    myFile<<PassengerName<<endl;
				myFile<<phoneNo<<endl;
				myFile<<passportNo<<endl;
				myFile<<phoneNo<<endl;
				myFile.close();
			}
			void fileReading()
			{
				ifstream Myfile;
			   		Myfile.open("Flight.txt");
			   		if(Myfile.is_open())
			   		{
			   			while(!Myfile.eof())
			   			{
			   				Myfile>>flight_number;
			   				Myfile>>name;
				            Myfile>>seats;
						}
					}
				Myfile.open("Schedule.txt");
				if(Myfile.is_open())
				{
					while(!Myfile.eof())
					{
						Myfile>>aPlace;
						Myfile>>dPlace;
						Myfile>>aDate;
						Myfile>>dDate;
						Myfile>>aTime;
						Myfile>>dTime;
					}
				}
				Myfile.open("Passenger.txt");
					if(Myfile.is_open())
					{
						while(!Myfile.eof())
						{
							Myfile>>PassengerName;
							Myfile>>phoneNo;
							Myfile>>passportNo;
							Myfile>>phoneNo;
						}
					}	
}
};
int main ()
{
		int choice,j=1;
	Flight f;
while(j!=0)
{

	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout<<"|"<<endl<<"|""\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Prepared BY:"<<endl<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t";
	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Maryam Farooq"<<endl<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Mahnoor Nadeem"<<endl;
	cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"shanila Abid"<<endl<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t";
    cout<< "MAIN MENU" <<endl<<"|"<<endl<<"|"<<endl<<"|"<<endl;
   	cout<<"1. Admin" <<endl;
   	cout<<"2.Passanger"<<endl;
   	cin>>choice;
   	Admin ad ;
   	if(choice==1)
   	{
   		int x;
   		string UserName,Password;
   		system("CLS");
   		cout<<"enter User name"<<endl;
   		cin>> UserName;
   		cout<<"Enter Password "<<endl;
   		cin>>Password;
   		
		   if(ad.getUserName()==UserName && ad.getPassword()==Password)
   			{
				int ad_choice;
				system("cls");
				cout<<"1. Add Flight Schedule"<<endl;
				cout<<"2. Change Flight Schedule"<<endl;
				cin>> ad_choice;
				if(ad_choice==1)
				{
					ad.addFlight();
					ad.fileWriting();
				   }
				  else if(ad_choice==2)
				   {
				   	string number;
				   	cout << "Enter flight number which do you want to change"<<endl;
				   	cin>>number;
				   	ad.fileReading();
				   	if(number==ad.getFlightNumber())
				   	{
				   		cout<<"Enter departure date"<< endl;
						ad.set_dDate();
						cout<<"Enter arrival date"<< endl;
						ad.set_aDate();
						cout<<"Enter departure Place"<< endl;
						ad.set_dPlace();
						cout<<"Enter arrival Place"<< endl;
						ad.set_aPlace();
						cout<<"Enter departure Time"<<endl;
						ad.set_dTime();
						cout<<"Enter arrival Time"<<endl;
						ad.set_aTime();
						ad.fileWriting();
					   }
					   
				   else
				   {
				   		cout<<"Invalid flight number"<<endl;
	   				}
			   	}
			   
}
else {
	cout<< "Invalid username/ password"<< endl;
}
}
if(choice==2)
{
	cout<<"1. Book Seat"<<endl<<"2. Display Flights Shedule"<< endl<<"3. Display Customers Boarding pass"<<endl;
	cout<<"4. Display a flights occupancy"<<endl<<"5. Cancelation of seat" <<endl<<"6. Exit"<< endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl<< endl;
	cout<< "Enter the number from menu box"<<endl;
		int pr_choice;
		cin>>pr_choice;
		if(pr_choice==1)
{
	ad.Display();
	ad.setFlightNumber();
	ad.setPassengerName();
	ad.setPassport();
	ad.setPhoneNo();
	ad.set_luggage();
	ad.set_pet();
	ad.setSeatnumber();
	ad.seattaken();
	ad.fileWriting();
}
else if(pr_choice==2)
{
	ad.fileReading();
	ad.Display();
}
else if(pr_choice==3)
{
	string PassportNumber;
			cout<<"Enter PassportNumber of which you want to cancel Seat"<<endl;
			cin>>PassportNumber;
			ad.fileReading();
				if(ad.getPassport() == PassportNumber)
				{
					cout<<"Passenger Name"<<ad.getPassengerName()<<endl;
					cout<<"Passenger Passport Number"<<ad.getPassport()<<endl;
					cout<<"Passenger seat NUmber"<<ad.getSeatNumber()<<endl;
					cout<<"Flight Number "<<ad.getFlightNumber()<<endl;
					break;	
					ad.fileWriting();	
				}
				else {
					cout<<"invalid Passport Number"<<endl;
				}

}
else if(pr_choice==4)
{
	string flight_number;
			cout<<"enter Flight Number of which you want check seat Occupancy"<<endl;
			cin>>flight_number;
			ad.fileReading();
			if(ad.getFlightNumber()== flight_number)
				{
					cout<<"Seats Left = "<<ad.getSeats();
					ad.fileWriting();
				}
}
else if(pr_choice==5)
{
	ad.fileReading();
	string PassportNumber;
			cout<<"Enter PassportNumber of which you want to cancel Seat"<<endl;
			cin>>PassportNumber;
			if(ad.getPassport()== PassportNumber)
				{
					ad.seatCancel();
					ad.fileWriting();
				}
				else {
					cout<<"invalid Passport Number"<<endl;
				}
}
}
}
}

