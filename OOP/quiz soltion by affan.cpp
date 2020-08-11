#include<iostream>
using namespace std;

class student{
	
	protected:
	
	//Data members
	string name;
	int roll;
	int fine;
	bool gender;
	
	public:
	
	friend student* addstd(student* ptr1, int len);
	friend void getdata(student* ptr, int len);
	friend void check(student* ptr, int len); // friend prototypes
	
	setdata(){
		
	// For Setting data
	cout<<"Enter name of the student ";
	cin>>name;
	
	cout<<"Enter roll no of the student ";
	cin>>roll;
	
	cout<<"Enter amount of fine ";
	cin>>fine;
	
	cout<<"Enter 0 for girl and 1 for boy ";
	cin>>gender;
	}
	
	// Constructor
	student(){
	
	name="";
	roll=0;
	fine=0;
	gender=1;
	}
};




int main(){
	
	student *ptr;
	
	//length of array initially 0
	int array_length=0;
	
	// assigning pointer 0th location address of the array 
	ptr= new student[array_length];
	
	
	
	int ch=0;
	do{
	cout<<"Enter 1 for adding new fined students, 2 to see number of boys and girls, 3 to see all data 0 to exit "<<endl<<"Choice: ";
	cin>>ch;
	
		switch(ch){
			
			case 1:{
				
				//This function will increase the array length by 1 and set the new students data
				// assing new arrays 0th location to older pointer
				ptr=addstd(ptr,array_length);
				
				// adding 1 to array length for next use
				array_length++;
				
				break;
			}
			
			case 2:{
				check(ptr,array_length);
				break;
			}
			
			case 3:{
				getdata(ptr, array_length);
				break;
			}
		}
		
	}while(ch!=0);
	
	
}

// Return type pointer
student* addstd(student* ptr1, int len){
	
	// New array is going to be 1 grater than older
	int newlen=len+1;
	 
	// temps for storing 0th locations of pointers in them 
 	student *ptr2,*temp1,*temp2; 
	
	// New array for new length
	ptr2= new student[newlen]; 
	temp2=ptr2;
	temp1=ptr1;
	
	for(int i=0; i<len; i++){
		
		 //copying old array into new and bigger one
		ptr2->name=ptr1->name;
		ptr2->roll=ptr1->roll;
		ptr2->fine=ptr1->fine;           
		ptr2->gender=ptr1->gender;
		
	
		ptr1++; ptr2++;   // Incrementing pointer positions
	
	}
	
	//restoring pointers to 0th location
	ptr1=temp1;
	ptr2=temp2;  
	
	delete []ptr1; //deleting the old array because we dont need it anymore
	
	ptr2=ptr2+len;  // moving pointer to last location that we want to enter data into
	
	ptr2->setdata(); //setting data of new students
	
	return temp2;
}


// Checking function
void check(student* ptr, int len){
	
	int male=0, female=0; 
	
	for(int i=0; i<len; i++){
		
		if(ptr->gender==1){
			male++;
		}
		
		else if(ptr->gender==0){
			female++;
		}
	
	}
	
	cout<<"Number of male are "<<male<<endl;
	cout<<"Number of female are "<<female<<endl;
}


// a simple friend getter function // JUST TO KNOW YOUR PROGRAM IS WORKING
void getdata(student* ptr, int len){
	
	for(int i=0; i<len; i++){
		
		cout<<"Data of Student "<<i;
		
		cout<<endl<<ptr->name<<endl;
		cout<<ptr->roll<<endl;
		cout<<ptr->fine<<endl;
		cout<<ptr->gender<<endl<<endl;
		
		ptr++;
		
	}
}
