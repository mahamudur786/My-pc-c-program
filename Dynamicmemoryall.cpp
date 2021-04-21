#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size ;
	long sum=0;
	int *ptr;
	cout<<"Enter no of valuse of the array"<<endl;
	cin>> size;
	ptr = new int[size];
	cout<<"Enter no of valuse of the array"<<endl;
	for(int i=0;i<=size-1;i++)
	{
		cin>>ptr[i];
	}
	cout<<"valuse of the array"<<endl;
	for(int i=0;i<=size-1;i++)
	{
		sum=sum+ptr[i];
	}
	cout<<sum;
	return 0;
}
