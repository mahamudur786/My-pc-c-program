#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]!=42)
		{
			cout<<a[i]<<endl;
		}
		else
		break;
	}
	return 0;
}
