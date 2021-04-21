#include<bits/stdc++.h>
using namespace std;
typedef long long ll
int main(){
	ll x;
	scanf("%lld",&x);
	if(x>=0)
	{
		int s = x%10;
		if(s==x)
			cout<<"Correct Number\n";
		else{
			cout<<"Incorrect Number\n";
		}
	}
	else{
		cout<<"Wrong Input\n";
	}
	return 0;
}
