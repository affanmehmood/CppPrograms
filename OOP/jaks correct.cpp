#include<iostream>
#include<string>
using namespace std;
class myclass
{
	private:
	string minahil;
	public:
		void setData()
		{
			cout << "Enter string : ";
			cin>>minahil;
		}
		
		void getData()
		{
			cout << "String is: " << minahil << endl;
		}
		
		bool operator ==(myclass s)
	{
	       //stringName.length() ya //stringName.size()  koi bhi function use kr skti ho string length calculate krnay k liye
			
			if(minahil.length()==s.minahil.size())
			{
				return 1;
		    }                //strlen() aur str.length() wagera ko bhool jaoo
				else
		    {
				return 0;
		    }
		}
};
 int main()
 {
 	myclass obj1, obj2;
 	obj1.setData();
 	obj2.setData();
 	obj1.getData();
 	obj2.getData();
 	if(obj1==obj2)
 	{
 		cout << "Srings are equal"; 
    }
	else
	{
		cout << "Strings are not equal";
    }
 }
