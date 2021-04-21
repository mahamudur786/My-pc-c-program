#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	int kth;
	cin >> n >> kth;
	vector<int>v;
	for(ll i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
		}
	}
	if(kth>v.size())
	{
	kth = kth-1 - v.size();	
	}
	else if(kth==v.size())
	{
		kth = kth;
	}
	cout << v.at(kth);
 return 0;
}
