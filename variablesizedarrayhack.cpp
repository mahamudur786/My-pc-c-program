#include<bits/stdc++.h>
using namespace std;


int main() {
    int i,n,q, s=0;
    //length of the array n and no of queries is q
    cin>>n >> q;
    int* arr[n];
    while(n--)
    {
        int x;
        cin>>x;
        arr[s]= new int[x]; //arr[x]
        for(i=0;i<x;i++)
        
            cin>>arr[s][i];
        
        s++;
    }
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }

    return 0;
}

