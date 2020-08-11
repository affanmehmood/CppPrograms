#include<iostream>
#include<string.h>
using namespace std;
class population
{
	public:
		
		double popul;
		double births;
		double deaths;
		
		double birthrate ()
		{    double b;
		
			b=births/popul;
			return b;
		}
		
			double deathrate ()
		{  
		    double b;
		
			b=deaths/popul;
			return b;
		}
		
		void setData ()
		{
			do{
			         cout<<"Enter total population:"<<endl;
			         cin>>popul;
			
		      }while(popul<1);
			
			do{
			
			      cout<<"Enter birth rate:"<<endl;
			      cin>>births;
 			   
			  }while(births<0);
			  
			do{
			  
			      cout<<"Enter death rate:"<<endl;
			      cin>>deaths;
		      }while(deaths<0);
		      
		  }
};
        
        int main()
        {	
        	double b,d;
        	population p;
        	
        	p.setData();
        	
        	b=p.birthrate();
        	cout<<"Birth Rate is:" << b<<endl;
        	
        	d=p.deathrate();
        	cout<<"Death Rate is:"<<d<<endl;
		}
