#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums, int k);
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(60);
	v.push_back(70);
	int p =2;
	solve(v,p);
	 return 0;
}
int solve(vector<int>& nums, int k) {
    while ((k--) {
        int min = *min_element(nums.begin(), nums.end());

        int max = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == max)
                nums.erase(i);
            else if (nums[i] == min)
                nums.erase(i);
        }
    }
    int sum = max - min;
    return sum;
}
