#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,x1,x2,factor;
	cin>>a>>b>>c;
	float d= 2*a;
	factor=(b*b)-(4*a*c);
	if(factor<0)
	{
		x1=(-b+pow(-factor,0.5))/d;
		x2=(-b-pow(-factor,0.5))/d;
	}
	else{
		x1=(-b+pow(factor,0.5))/d;
		x2=(-b-pow(factor,0.5))/d;
	}
	cout<<x1<<"\t"<<x2;
	return 0;
}
