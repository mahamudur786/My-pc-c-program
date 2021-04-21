/* https://prepdrive.in/tcs/nqt/tcs-nqt-programming-2
       					TCS test demo coding question
       					Happy Learning!  	 	 	 		 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll test;
	cin >> test;
	vector<ll>vi;
	for(int i=0;i<test;i++)
	{
		vi.push_back(i+1);
	}
	vector<ll>v;
	while(test--)
	{
		ll temp;
		cin >> temp;
		v.push_back(temp);
	} 
	sort(v.begin(), v.end());
	for(ll i=0; i<v.size(); i++)
	{
		if(v.at(i)!=(vi.at(i)))
		{
			cout << vi.at(i)<<endl;
			break;
		}

	}
 	return 0;
}
