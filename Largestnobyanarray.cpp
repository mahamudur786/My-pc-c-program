#include <iostream> 
#include <bits/stdc++.h> 
using namespace std;

int findMaxNum(int arr[], int n) 
{    
    sort(arr, arr+n, greater<int>()); 
      
    int num = arr[0]; 
     for(int i=1; i<n; i++) 
    { 
        num = num*10 + arr[i]; 
    } 
    
      
    return num; 
} 
  
int main()  
{ 
    int arr[] = {3, 5, 7, 8}; 
      
    int n = sizeof(arr)/sizeof(arr[0]); 
      
    cout<<findMaxNum(arr,n); 
      
    return 0; 
} 
