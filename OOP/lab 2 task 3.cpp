#include<iostream> 
using namespace std;
struct player
{
    string name;
    int number;
    int points;
    
    void setdata()
    
	{
    
	    cout<<"enter player name:"<<endl;
	    cin>>name;
    
	    cout<<"enter player number:"<<endl;
        cin>>number;
        
		cout<<"enter score of the player:"<<endl;
        cin>>points;
        
		if(number<0)
        {
            while(number<0)
            {
                cout<<"again enter player number:"<<endl;
                cin>>number;
            }
        }
        if(points<0)
            {
                while(points<0)
                {
                    cout<<"again enter points scored by the player:"<<endl;
                    cin>>points;
                }
            }

    }
    void getdata()
    {
        
		cout<<"player name:"<<name<<endl;
        
		cout<<"player number:"<<number<<endl;
        
		cout<<"player points:"<<points<<endl;
    
	}

};

int main()

{
    player play[3];
 
    int i;
    int totalpoints=0;
    int highest=0;
 
    for(i=0;i<3;i++)

    {
        play[i].setdata();
    }

     for(i=0;i<3;i++)

    {
        play[i].getdata();
    }

    for(i=0;i<3;i++)

    {
        totalpoints=totalpoints+play[i].points;
    }
    cout<<"total points by the team:"<<totalpoints<<endl;

    for(i=0;i<3;i++)

    {
        if(play[i].points>highest)
        {
            highest=play[i].points;
        }
    }
    for(i=0;i<3;i++)

    {
        if(highest==play[i].points)
        {
           
		    cout<<"highest point scorer in the team was of number:"<<play[i].number<<endl;
		    cout<<"Name of that player:"<<play[i].name<<endl;
        
		}
    }
    return 0;


}
