#include<iostream>
using namespace std;
class stock
{   
    private:
	int productId;
	string productName;
	int productQuantity;
	float price;
	public:
		stock(){}
        void addProduct();
		void showProduct();
		void searchProduct();
		void sell();
		void quantAvl();
		void setdata();
		void getdata();
};

int tprice=0;
int hi=1;

void stock :: addProduct()
{
	tprice = tprice + price;
}

void stock :: showProduct(){
	cout<<" product nmae is "<<productName <<endl;
	cout<<" product id is "<<productId <<endl <<" quantity of product is "<< productQuantity<<"price of product is" <<price;
}

void stock :: searchProduct()
 {
	int x;
	if(hi==1){
	cout<<"press 1 to search by name and press 2 to search by id"<<endl;
	cin>>x;
	hi++;}
	switch(x) {
	case 1:{
	string name;
	if(hi==1){
	cin>>name;
	hi++;}
		
				if(name==productName){cout<<"product found"<<endl;}
				else{cout<<"product not found"<<endl;}}
	    case 2:
	    	{
	    		int id;
	    		if(hi==1){
	    		cin>>id;
				hi++;}
	    			if(id==productId)
	    			{
	    				cout<<"product found"<<endl;
					}
					else
					{
						cout<<"product not found"<<endl;
					}
				}
	}
}
void stock :: sell()
 {
	cout<<"enter the name of the product you want to buy";
	string name;
	if(hi=1)
	{
	cin>>name;
    }
	if(name==productName)
	{
	productId=0;
	productName="";
	productQuantity=0;
	price=0;
	}
	
	
 }
 void stock :: quantAvl()
 {
	int x;
	if(hi==1)
	{
	cout<<"press 1 to search by name and press 2 to search by id"<<endl;
	cin>>x;
	hi++;
	}
	switch(x) 
	{
		case 1:
		{
			string name;
			if(hi==1){
			
			cin>>name;
			hi++;}
		
				if(name==productName)
				{
					cout<<"product found"<<endl;
				}
				else
				{
					cout<<"product not found"<<endl;
				}
			}
		}
	}
void stock :: setdata()
 {
	cout<<"enter product ID"<<endl;
	cin>>productId;
	cout<<"enter the name of the product"<<endl;
	cin>>productName;
	cout<<"enter the quantity of the product"<<endl;
	cin>>productQuantity;
	cout<<"enter product price"<<endl;
	cin>>price;
 }
void stock :: getdata()
 { 
	cout<<" product ID is "<<price<<endl;

	cout<<" the name of the product is "<<productName<<endl;
	
	cout<<" quantity of the product is "<<productQuantity<<endl;
	
	cout<<" product price is "<<price<<endl;
 } 
int main()
 {
 	int l;
	cout<<"                    Enter number of items you want to enter "; cin>>l; cout<<endl<<endl;
	stock obj[l], *ptr,*temp;
	ptr = &obj[0];
	temp=ptr;
	
	for(int j=0;j<l;j++)
	{
	temp->setdata();
	temp++;
    }
    temp=ptr;
    for(int s=0;s<l;s++)
	{
	temp->getdata();
	temp++;
    }
    temp=ptr;
	
	int x;
	
do{
	cout<<"o 1 for Add Products "<<endl<<"o  2 for Show Products "<<endl<<"o 3 for Search Products "<<endl<<"o 4 for Sell a Products"<<endl<<"o 5 for Quantity Available"<<endl;
    cin>>x;
    cout<<endl<<endl<<endl;
	switch(x)
	{
		
	case 1:
		{
		       for(int i=0;i<l;i++)
			   {
			   temp->addProduct();
			   temp++;
		       }
		       cout<<"Total price is " <<tprice <<endl;
		       temp=ptr;
		       tprice=0;
		}
	case 2:
		{
			for(int i=0;i<l;i++)
			   {
		   		temp->showProduct();
			    temp++;
			   }
			   temp=ptr;
			   hi=1;
		}
	case 3:
		{
			for(int i=0;i<l;i++)
			   {
		        temp->searchProduct();
		        temp++;
			   }
			   temp=ptr;
		}
	case 4:
		{
			for(int i=0;i<l;i++)
			   {
			temp->sell();
		    temp++;
		       }
	        temp=ptr;
		 }
	case 5:
		{
			for(int i=0; i<l; i++)
			{
				temp->quantAvl();
				temp++;
			}
			hi=1;
}
	
	}
 }
while(x!=0);	
 }

