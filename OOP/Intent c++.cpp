#include<iostream>
#include<Windows.h>
using namespace std;

void fun(){
	STARTUPINFO SI = {0};
	PROCESS_INFORMATION PI = {0};
	
	BOOL bSucess = CreateProcess(TEXT("C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,
	&SI,&PI);
	
	if(bSucess){
	cout<<"Started: "<<endl;
	cout<<"Process Id: "<<PI.dwProcessId<<endl;
	}
}

int main(){
	fun();
	
	return 0;
}
