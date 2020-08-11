#include <iostream>
using namespace std;
class travel
	{
	int hour;
	int km;
	public:
	void add(travel);
	void show();
	void input();
};

void travel :: add(travel o1)
{
   int x=0,y=0;
   
   x=hour+o1.hour;
   y=km+o1.km;
   
   cout<<"total travelling is "<<y<<" kilometers in "<<x<<" hours"<<endl; 
}


void travel :: show()
{
	cout<<"you travelled "<<km<<" kilometers in "<<hour<<" hours"<<endl<<endl;
	
}

void travel :: input()		
{
	cout<<"enter travelled hours"<<endl;
	cin>>hour;
	
	cout<<"enter travelled kms"<<endl;
	cin>>km;
}

int main() {
	
	travel t1,t2;
	
	t1.input();
	t1.show();
	
	cout<<endl<<"Now enter peremeters for second lap"<<endl<<endl<<endl;
	
	t2.input();
	t2.show();
	
	t1.add(t2);
}
