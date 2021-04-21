#include<bits/stdc++.h>
using namespace std;
int main()
{
    int* arr;
    int n,d,i,newindex;
    cout<<"Enter the array size & no of rotation\n";
    cin>>n>>d;
    arr = new int[n];
    int rotarray[n];
 	cout<<"Enter the array Elements\n";  
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=n-1;i++)
    {
    newindex= (i+n-d)%n;
    rotarray[newindex]=arr[i];
    }
    cout<<"After the "<<d<<" times rotation new array elements are\n";
    for(i=0;i<=n-1;i++)
    {
        cout<<rotarray[i]<<" ";
    }
    return 0;
}

