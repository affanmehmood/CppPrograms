#include<iostream>
using namespace std;

class capital
{
	static int count;
	
	public:
		capital()
		{
			count++;
			cout<<count<<endl;
		}
};
int capital:: count=0;
int main()
{
   capital o1,o2;	
}
