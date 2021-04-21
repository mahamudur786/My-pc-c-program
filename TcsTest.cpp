#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll x,y;
	scanf("%lld",&x);
	if(x>=0)
	{
		y= x*x;
		int s = y%10;
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
