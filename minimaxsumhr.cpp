#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5],min,max;
    int sum=0;
    for(int i=0;i<5;i++)
    {
	cin>>A[i];
    }
    min=A[0];
	max=A[0];
    for(int i=0;i<5;i++)
    {
    if(A[i]>=max)
    max=A[i];
    else 
    max=max;
    }
    for(int i=0;i<5;i++)
    {
    if(A[i]>=min)
    min=min;
    else 
    min=A[i];
    }
    for(int i=0;i<5;i++)
    {
    sum=sum+A[i];
    }
    cout<<sum-max<<" "<<sum-min;
    return 0;
}
