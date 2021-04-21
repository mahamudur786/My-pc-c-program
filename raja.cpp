#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,i,sum=0;
    int *arr;
    arr=new int[size];
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
