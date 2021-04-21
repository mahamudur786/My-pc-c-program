#include<iostream>
using namespace std;
int fib(int i)
{
	if(i==1)
	return 0;
	else if(i==2)
	return 1;
	else
	return(fib(i-1)+fib(i-2));
}
int main()
{
	int x;
	cin>>x;
	for(int i=1;i<=x;i++)
	cout<<fib(i)<<" ";
	return 0;
}
