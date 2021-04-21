#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,rem;
	cin>>a;
	int n = a/10;
	while(n!=0)
	{
		rem=a%10;
		n/=10;
	}
	cout<<rem<<endl;
}
