#include<bits/stdc++.h>
using namespace std;
int main(){
	while(true)
	{
		string s;
		cin >> s;
		if(s.size()== 0)
		{
			break;
		}
		reverse(s.begin(),s.end());
		cout<<s<<" ";
	}
	return 0;
}
