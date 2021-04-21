#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,result,m=0;
    cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(arr[i]==arr[j])
    		count++;
		}
	result=(count+1)/2;
	m=m+result;
	}
	cout<<m;
	return 0;
}
