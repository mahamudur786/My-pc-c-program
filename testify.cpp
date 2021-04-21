#include<iostream>
using namespace std;
 int fac(int);
int main()
{
	cout<<fac(6);
}
int fac(int n)
{
	if(n==0)
	return 1;
	else 
	return(n*fac(n-1));
}
