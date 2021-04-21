#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int x;
	float y,res;
	cin>>x>>y;
	res= y-float(x)-0.50;
		if(x<y)
		{	
    	if(x%5==0)
		cout << fixed << setprecision(2) << res<<endl;
		else
		{
		cout << fixed << setprecision(2) << y<<endl;
    	}
		}
		else
    	cout << fixed << setprecision(2) << y<<endl;
	return 0;
}
//problem code HS08TEST

