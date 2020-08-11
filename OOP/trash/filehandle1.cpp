#include <iostream>
//#include"box.h"
//#inlcude"person.h"
#include<fstream>

using namespace std;
class person
{
	public:
	int id;
};
//void reset (box *obj);
int main()
{ 
      
	  // writing part
	  person students[200];
      ofstream myFile;
      int i;
      for(i=0; i<200; i++)
	  {
      	students[i].id=i+1;
	  }
	  
	  for(i=0;i<200;i++)
	  {
	  	myFile<<students[i].id<<endl;
	  }
	  
	  // read part
	ifstream myReadFile;
	
	myReadFile.open("file.txt");
	
	if(myReadFile.is_open())
	{
		while(!myReadFile.eof())
		{
			myReadFile>>temp;
		}
	  }  
	  
	  
	  
}




