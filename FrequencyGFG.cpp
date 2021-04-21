#include<bits/stdc++.h> 
using namespace std; 
void frequencycount(vector<int>& arr,int n);

void frequencycount(vector<int>& arr,int n)
{   
	for(int i=1;i<=n;i++)
	{
		int temp=0;
		for(int j=0;j<n;j++)
		{
		if(i==arr[j])
		temp++;
		}
		cout<<temp<<" ";
	}
}
int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int n;
	    //size of array
	    cin >> n; 
	    
	    vector<int> arr(n,0);
	    
	    //adding elements to the vector
	    for(int i = 0;i<n;i++){
	        cin >> arr[i]; 
	    }

        //calling frequncycount() function
		frequencycount(arr,n); 
		
		//printing array elements
	    for (int i =0; i<n; i++) 
			cout<<arr[i]<<" ";
	    cout<<endl;
	}	
	return 0;
}
