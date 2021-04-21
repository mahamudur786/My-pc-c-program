#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v1;
	int a[6],max;
	
	for(int i =0;i<6;i++)
	{
		cin>>a[i];
		v1.push_back(a[i]);
	}  
	cout<<"\n\n\n\n\n";
	cout<< *max_element(v1.begin(),v1.end());                                                                        
	return 0;
}
