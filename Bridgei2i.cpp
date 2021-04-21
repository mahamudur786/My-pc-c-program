#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r;
	vector <int> v1;
	cin>>n;
	while(n!=0)
	{
		r= n%10;
		v1.push_back(r);
		n= n/10;
	}
	cout<<"{";
	for(int i= v1.size()-1;i>=0;i--)
	{
		cout<<v1.at(i)<<",";
	}
	cout<<"}";
	return 0;
}
