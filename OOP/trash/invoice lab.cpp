#include<iostream>
using namespace std;
class invoice
{
	private:
		int num;
		string des;
		int qua;
		int pri;
		
		public:
			invoice (int n, string d)
		{
			num = n;
			des=d;
		}
		invoice(int n, string d, int q, int p)
		{
			num = n;
			des=d;
			qua=q;
			pri=p;
		}
		
			void setNum(int n);
			void setdes(string de);
			void setqua(int q);
			void setprice(int p);
			int getnum();
			int getqua();
			int getprice();
			string getdes();
			int getInvo();
			
};
	        void invoice :: setNum(int n)
			{
				num=n;
			}
			
			void invoice :: setdes(string de)
			{
				de=des;
			}
			
			void invoice :: setqua(int q)
			{ 
			   qua=q;
			}
			
			void invoice :: setprice(int p)
			{
				pri=p;
				
			}
			
			
			int invoice :: getnum()
			{
			   return num;
			}
			int invoice :: getqua()
			{ 
			    return qua;
			}
			
			int invoice :: getprice()
			{
				return pri;
			}
			string invoice :: getdes()
			{
				return des;
			}
			
			int invoice :: getInvo()
			{
			 return	pri*qua;
			}
 int main()
 {
 	
	 
	 int p,qua,n;
 	string des;
    
	cout<<"enter price"<<endl;  	
	cin>>p;
	cout<<"enter destination"<<endl;
 	cin>>des;
 	cout<<"total number"<<endl;
 	cin>>n;
 	cout<<"enter quantity"<<endl;
 	cin>>qua;
 	cout<<endl;
 	
 	invoice in(n,des,p,qua);
 	in.setprice(p);
 	in.setqua(qua);
 	in.setNum(n);
 	in.setdes(des);
 	
 	cout<<in.getnum()<<endl;
 	cout<<in.getqua()<<endl;
 	cout<<in.getprice()<<endl;
 	cout<<in.getdes()<<endl;
 	cout<<endl<<"total price is :   ";
 	cout<<in.getInvo()<<endl;
 }

