//https://binarysearch.com/problems/Text-Editor
#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(string str) {
	char s[str.size()+1];
	strcpy(s, str.c_str());
	
    if(s[0]=='<' && s[1]=='-')
        {
            s[0]='';
            s[1]='';
        }
    for(int i=2;i<s.size()-1;i++)
    {
        if(s[i]=='<' && s[i+1]=='-')
        {
            s[i-1]='';
        }
    }
    string arr ="";
    for(int i =0;i<str.size()+1;i++)
    {
    	arr=arr+s[i];
	}
    return arr;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll testcase;
	cin >> testcase;
	while(testcase--)
	{
		string s ="<-x<-z<-";
		cout << solve(s);
	}
	return 0;
}

