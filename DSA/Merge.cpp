#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,5,6,8,7,0,2,4};
	int element, index=0;
	
	cin>>element;
	while(element != arr[index] && ++index < 10);
	int ans = index < 10 ? index : -1;
	cout<<ans;
}
