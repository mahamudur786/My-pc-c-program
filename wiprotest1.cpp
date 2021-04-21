#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name,p1,p2;
	int len,i,count=0;
	getline(cin,name);
	len = name.size();
	p1= name;
	for(i=len-1;i>=0;i--)
	{
		name[i];
	}
	for(i=len-1;i>=0;i--)
	{
		if(p1[i]==p2[i])
		count++;
	}
	cout<<name<<endl;

	cout<<count<<endl;
	cout<<p1<<endl;
	cout<<p2<<endl;
	return 0;
}
