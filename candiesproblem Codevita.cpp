#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin >> test;
	while(test--)
	{
		int size;
		cin >> size;
		int *ptr;
		ptr = new int[size];
		vector<int>v;
		for (int i =0;i<size;i++)
		{
			cin >> ptr[i];
		}
		int sum =ptr[0];
		for (int i =1;i<size;i++)
		{
		sum = sum+ptr[i];
		v.push_back(sum);
		}
		int sums =0;
		for (int j=0;j<v.size();j++)
		{
		sums= sums+v.at(j);
		}
		cout << sums;
	}
 return 0;
}
