#include <iostream>
using namespace std;

int main() {
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter the"<<i+1<<" element";
		cin>>arr[i];
		
	}
	cout<<"index method\n";
	for(int j=0;j<10;j++)
	cout<<arr[j]<<"\n";
	cout<<"pointer method\n";
	int *p;
	for(int k=0;k<10;k++)
	{
		p=&arr[k];
		cout<<*p<<"\n";
	}
	// your code goes here
	return 0;
}
