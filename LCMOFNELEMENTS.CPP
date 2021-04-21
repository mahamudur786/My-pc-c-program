
// C++ program to find LCM of n elements 
#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
  
// Utility function to find 
// GCD of 'a' and 'b' 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(int arr[], int n) 
{ 
    // Initialize result 
    ll ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
  
// Driver Code 
int main() 
{ 
    int n;
    cout<<"How many nos you want to LCM?\n";
    cin>>n;
    int *arr = new int[n];
	cout<<"enter the array elements\n"; 
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the LCM of n elements is::";
    printf("%lld", findlcm(arr, n)); 
    return 0; 
} 

