#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long counter=0,temp;
	for(long long i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		if(temp%k==0)
		 counter++;
	}
	printf("%lld",counter);
	return 0;
}
