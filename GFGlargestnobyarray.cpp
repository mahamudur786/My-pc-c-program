#include <bits/stdc++.h>
using namespace std;
struct cmp{
    bool operator()(string s1,string s2)
	    {
	        string t1=s1+s2;
	        string t2=s2+s1;
	        int n=t1.length();
	        for(int i=0;i<n;i++)
	        {
	            if(t1[i]>t2[i]) return true;
	            else if(t2[i]>t1[i]) return false;
	        }
	        return false;
	    }
    };
class Solution{
public:
	string printLargest(vector<string> &arr) {
	 sort(arr.begin(),arr.end(), cmp());
	   string s="";
	   for(int i=0;i<arr.size();i++)
	   {
	       s+=arr[i];
	   }
	   return s;
	}
};

	int main() 
	{
    int t;
    cin >> t;
    while (t--) 
	{
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        string ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
	}  
