#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

int count = 200000000;
	
void rec(int x){
	bool div = false;
	for(int i=2; i<count/2; i++){
		if(--count%i==0){
			div = true;
		}
	}
	if(div)
		cout<<"NOT "<<endl;
	else
		cout<<"Prime "<<endl;
}

int main(){
	while(true){
		
	thread t1(rec),t2(rec),t3(rec), t4(rec), t5(rec);
	t1.join(); t2.join(); t3.join(); t4.join(); t5.join();
	Sleep(25);
	}
}

