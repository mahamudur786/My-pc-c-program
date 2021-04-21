#include<bits/stdc++.h>
using namespace std;
//thses program sorting user input vector elements
int main() {
     
	int s;
	cin>>s;
	int arr[s];
   vector <int> v;
   for(int i=0;i<s;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<s;i++)
   {
       v.push_back(arr[i]);
   }
   
   sort(v.begin(),v.end());
   
   for(int i=0;i<s;i++)
   {
       cout<<v.at(i)<<" ";
   }
   
    return 0;
}

