#include<bits/stdc++.h>
using namespace std;
int main(){
 	long long p;
 	cin>>p;
 	vector<long long>v;
 	while(p--)
 	{
 		long long temp;
 		cin>>temp;
 		v.push_back(temp);
 	}
 	sort(v.begin(),v.end());
 	long long x;
 	cin >> x;
 	cout<<v.at(x)<<endl;
 	return 0;
}

