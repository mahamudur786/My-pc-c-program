#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	ll low,high;
	cin>>low>>high;
	map<int,int>unique;
	for(ll i=low;i<=high;i++)
	{
		string temp;
		temp=to_string(i);
		for(auto x:temp)
		{
			string s(1,x);
			int digit=stoi(s);
			unique[digit]++;
			
		}
		
	}
	for(auto x:unique)
	{
		if(x.second==1)
			cout<<x.first<<" ";
	}
	return 0;
} 
