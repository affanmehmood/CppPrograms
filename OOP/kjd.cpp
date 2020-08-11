#include<iostream>
using namespace std;
class Count
{
	private:
		int n;
	public:
	    
		count()
		{
			n = 0;
		}
		void show()
		{
			cout << "n = " << n << endl;
		}	
		Count operator ++()
		{
			Count c2;
			n = n+1;
			c2.n = n;
			return c2;
			
		}
};

int main()
{   Count a;
	Count c1;
	c1.show();
	a = ++c1;
	c1.show();
}
