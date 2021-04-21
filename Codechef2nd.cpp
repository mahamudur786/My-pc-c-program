#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	long long counter=0,temp;
	for(long long i=0;i<n;i++)
	{
		cin>>temp;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if(temp%k==0)
		 counter++;
	}
	cout<<counter<<endl;
	return 0;
}
