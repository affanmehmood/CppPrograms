#include<iostream>
using namespace std;
class population
{
	public:
	double pop;
	double deths;
	double births; 
	double fun(double ,double );
};

double population :: fun(double x,double y)
{
	double z;
	z = x/y;
	return z;
}

int main()
{
	double brate1,drate1,brate2,drate2,brate3,drate3;
	
	population o1;
	population o2;
	population o3;
    
	cout<< "enter population and no of birts and deaths respectively"<<endl;
   
    cin>>o1.pop;
    do{
	cin>>o1.births;
    } while(o1.births<1);
	do{
	cin>>o1.deths;
    } while(o1.deths<0);

    cout<< "enter population and no of birts and deaths respectively"<<endl;
	
	cin>>o2.pop;
     do{
	cin>>o2.births;
    } while(o2.births<1);
	do{
	cin>>o2.deths;
    } while(o2.deths<0);
    
    cout<< "enter population and no of birts and deaths respectively"<<endl;

	cin>>o3.pop;
     do{
	cin>>o3.births;
    } while(o3.births<1);
	do{
	cin>>o3.deths;
    } while(o3.deths<0);
    
    cout<<"calculating";
    
	system("cls");
	
	brate1 = o1.fun(o1.births,o1.pop);
    drate1 = o1.fun(o1.deths,o1.pop);
    
	brate2 = o2.fun(o2.births,o2.pop);
    drate2 = o2.fun(o2.deths,o2.pop);
     
	brate3 = o3.fun(o3.births,o3.pop);
    drate3 = o3.fun(o3.deths,o3.pop);
     
	cout<<"birth rate and death rate of year 1 respectively"<< endl <<brate1<<endl;
    cout<<drate1<<endl;
     
    cout<<"birth rate and death rate of year 2 respectively"<< endl <<brate2<<endl;
    cout<<drate2<<endl;
     
    cout<<"birth rate and death rate of year 3 respectively"<< endl <<brate3<<endl;
    cout<<drate3<<endl;


}
