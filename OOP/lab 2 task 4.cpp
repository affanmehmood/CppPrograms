#include<iostream>
using namespace std;
struct monthlybudget
{
    float housing;
    float totalhousing;
    float utilities;
    float totalutilities;
    float transportation;
    float totaltransportation;
    float food;
    float  totalfood; 
    float medical;
    float totalmedical;
    float insurance;
    float totalinsurance;
    float total; 
};
  monthlybudget setdata(monthlybudget amount)
 {
     cout<<"please enter amount spent on housing:"<<endl;
     cin>>amount.housing;
     amount.totalhousing=500-amount.housing;
     amount.total+=amount.totalhousing;
     cout<<"please enter amount spent on utilities:"<<endl;
     cin>>amount.utilities;
     amount.totalutilities=150-amount.utilities;
     amount.total+=amount.totalutilities;
     cout<<"please enter amount spent on transportation:"<<endl;
     cin>>amount.transportation;
     amount.totaltransportation=50-amount.transportation;
     amount.total+=amount.totaltransportation;
     cout<<"please enter amount spent on food:"<<endl;
     cin>>amount.food;
     amount.totalfood=250-amount.food;
     amount.total+=amount.totalfood;
     cout<<"please enter amount spent on medical:"<<endl;
     cin>>amount.medical;
     amount.totalmedical=30-amount.medical;
     amount.total+=amount.totalmedical;
     cout<<"please enter amount spent on nsurance :"<<endl;
     cin>>amount.insurance;
     amount.totalinsurance=100-amount.insurance;
     amount.total+=amount.totalinsurance;
     return amount;
 }

void getdata(monthlybudget amount)
{
    if(amount.housing>500)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }
    cout<<"amount spent on housing out of 500:"<<amount.housing<<endl;
    cout<<"amount left on housing budget:"<<amount.totalhousing<<endl;

    if(amount.utilities>150)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }

    cout<<"amount spent on utilities out of 150 :"<<amount.utilities<<endl;
    cout<<"amount left on utilities budget:"<<amount.totalutilities<<endl;

    if(amount.transportation>50)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }

    cout<<"amount spent on transportation out of 50:"<<amount.transportation<<endl;
    cout<<"amount left on transportation budget:"<<amount.totaltransportation<<endl;

    if(amount.food>250)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }

    cout<<"amount spent on food out of 250:"<<amount.food<<endl;
    cout<<"amount left on food budget:"<<amount.totalfood<<endl;

    if(amount.medical>30)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }

    cout<<"amount spent on medical out of 30:"<<amount.medical<<endl;
    cout<<"amount left on medical budget:"<<amount.totalmedical<<endl;

    if(amount.insurance>100)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }

    cout<<"amount spent on insurance out of 100:"<<amount.insurance<<endl ;
    cout<<"amount left on insurance budget:"<<amount.totalinsurance<<endl;

     cout<<"total amount which is actually spent out of 1080 :"<<1080-amount.total<<endl;

     if(1000-amount.total>1080)
    {
        cout<<"amount exceed the budget limit:"<<endl;
    }
    cout<<"amount left on  month of total budget of 1080:"<<amount.total<<endl;
}
int main()
{
    monthlybudget  money,store;
    store=setdata(money);
    getdata(store);
    return 0;




}
