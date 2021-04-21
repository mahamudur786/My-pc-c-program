#include <bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n)
{
	int j=1,counter=0;
	sort(dep, dep + n);
	for(int i=0;i<n;i++)
	{
        if(arr[j]>=dep[i])
        {
            counter++;
            j++;
        }
        else
            j++;
    }
    return counter;
}
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
