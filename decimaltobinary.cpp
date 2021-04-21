#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,rem;
	vector <int> v;
	cin  >> a;
	int k =0;
	while(a)
	{
		a = a/2;
		rem = a%2;
		v.push_back(rem);
		k++;
	}
	for(int j =v.size()-1;j>=0;j++)
	{
		cout << v[j];
	}
	return 0;
}

