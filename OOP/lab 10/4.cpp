#include<iostream>
using namespace std;
class shape{
	protected:
	string color;
	public:
	void setcolor();
	void getcolor();
	void display();
	double area();
	shape(){color="";}
	shape(string x){color=x;}
};
void shape :: setcolor(){cout<<"enetr color "; cin>>color;}
void shape :: getcolor(){cout<<"color is "<<color;}
double shape :: area(){return -1;}
void shape :: display(){cout<<"display function called "<<endl;}
class triangle: public shape{
    public:
	void setcolor();
	void getcolor();
	void display();
	double area();
    triangle(): shape() {base=0; height=0; sides=0;}
	triangle(double x, double y, double z, string s): shape(s) {base=x; height=y; sides=z;}
	double base,height,sides;
};
void triangle :: setcolor(){cout<<"enetr color "; cin>>color;}
void triangle :: getcolor(){cout<<"color is "<<color<<endl;}
double triangle :: area(){return 1/2*(base*height);}
void triangle :: display(){cout<<base<<endl<<height<<endl<<sides<<endl<<endl;}
class circle: public shape{
	double centerx,centery,radius;
	public:
	circle(): shape() {centerx=0; centery=0; radius=0;}
	circle(double x, double y, double z, string s): shape(s) {centerx=x; centery=y; radius=z;}
	void setcolor();
	double area();
	double diameter();
	double circum();
	void display();
	void getcolor();
};
void circle :: setcolor(){cout<<"center x "; cin>>centerx; cout<<"center y "; cin>>centery; cout<<"set radius "; cin>>radius;}
void circle :: getcolor(){cout<<"center x is "<<centery<<endl<<"center y is "<<centery<<endl<<"radius is "<<radius<<endl;}
double circle :: area(){return (22/7)*radius*2;}
double circle ::circum(){return 2*(22/7);}
double circle :: diameter(){return 2*radius;}
void circle :: display(){cout<<centerx<<endl<<centery<<endl<<radius<<endl<<endl;}
int main(){
circle obj1(12,13,45,"affan");
triangle obj2(34,56,32,"usman");
obj1.setcolor();
obj1.getcolor();
cout<<obj1.area();
cout<<obj1.circum();
cout<<obj1.diameter();
obj1.display();
obj2.setcolor();
obj2.getcolor();
cout<<obj2.area();
obj2.display();}
