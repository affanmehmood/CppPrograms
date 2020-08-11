#include<iostream>
using namespace std;
class animal{
    protected:
	string name;
	bool nature;
	public:
	animal(){name=""; nature=0;} 
	virtual void nothuman(){}
};
class herbi : public animal{
	protected:
	int grass;
	public:
	void nothuman();
	herbi(int x){grass=x;}
};
void herbi:: nothuman(){cout<<"this is a herbivour! "<<endl;}
class carni : public animal{
	protected:
	int meat;
	public:
	void nothuman();
	carni(int x){meat=x;}
};
void carni:: nothuman(){cout<<"this is a Carnivour! "<<endl;}

class cow : public herbi{
	protected:
	int weight;
	int age;
	public:
	void setdata();
	cow(int y) : herbi(y) {weight=0;age=0;}
};
class dog : public carni{
	protected:
	int weight;
	int age;
	public:
	void setdata();
	dog(int y) : carni(y) {weight=0;age=0;}
};
void cow:: setdata(){name="Cow";nature=0;weight=250;age=6;}
int main(){
	cow cow1(100);
	dog dog1(100);
	animal *animal1,*animal2;
	animal1=&cow1;
	animal2=&dog1;
	animal1->nothuman();
	animal2->nothuman();
}
