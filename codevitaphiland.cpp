#include<bits/stdc++.h>
using namespace std;
#define ll long long
int calc(int,int);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test,j;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		for(int i= 1;i  <=  n  ;i++)
		{
			int m;
			m = (i*(i+1))/2;
			if(m>=n)
				break;
			j = i;
		}
		cout >> j >> endl;
	}
return 0;
}]
