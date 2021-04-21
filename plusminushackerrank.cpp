#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    cin>>n;
    int* arr;
    arr = new int[n];
    int count=0,coun=0,cou=0;
    float div1,div2,div3;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        count++;
        else if(arr[i]<0)
        coun++;
        else 
        cou++;
    }
    cout<<fixed<<showpoint<<setprecision(6);
    div1=float(count)/float(n);
    div2=coun/n;
    div3=cou/n;
    cout<<div1<<endl;
    //cout<<div2<<endl;
    //cout<<div3<<endl;
    return 0;    
}
