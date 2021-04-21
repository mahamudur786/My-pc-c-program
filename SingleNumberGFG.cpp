#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
    for(int i=0;i<nums.size();i++)
	{
	  for(int j=0;j<nums.size();j++)
	  {
	   if(nums[i]==nums[j])
	   	singleNumber.push_back(nums[i]);	
	  }
	}
	sort(singleNumber,singleNumber + singleNumber.size());
    }
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(int i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
