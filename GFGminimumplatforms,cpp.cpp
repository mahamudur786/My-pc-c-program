#include <bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n)
{
	int temp[2400];
	for(int i=0;i<2400;i++)
		temp[i]=0;
		
	int max =0;
	for(int i=0;i<n;i++)
	{
		temp[arr[i]]++;
		temp[dep[i]+1]--;
	}
	for(int i=1;i<2400;i++)
	{
		temp[i]+=temp[i-1];
		if(temp[i]>max)
		max=temp[i];
	}
	return max;
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
