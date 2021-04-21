#include<bits/stdc++.h>
using namespace std;
int main()
{
	int battery=50,i,n;
	cin>>n;
	int* events;
	events= new int[n];
	for(i=0;i<n;i++)
	{
		cin>>events[i];
	}
	for(i=0;i<n;i++)
	{
		if((battery+events[i])>=100)
		battery=100;
		else
		battery=battery+events[i];
	}
	cout<<battery<<endl;
	return 0;
}
