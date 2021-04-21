#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int i,a[5],n=0,na=0,naa=0,naaaa=0,naaa=0;
	string dictionary[12] = {"hack","a","rank","khac","achk","kran","rankhacker","a","ab","ba","stairs","raits"};
	string query[5]= {"a","nark","bs","hack","stair"};
	for(i=0;i<5;i++)
	{
		sort(query[i].begin(),query[i].end());
	}
	for(i=0;i<12;i++)
	{
		sort(dictionary[i].begin(),dictionary[i].end());
	}
	for(i=0;i<12;i++)
	{
	if(query[0]==dictionary[i])
	n++;
	else if(query[1]==dictionary[i])
	na++;
	else if(query[2]==dictionary[i])
	naa++;
	else if(query[3]==dictionary[i])
	naaa++;
	else if(query[4]==dictionary[i])
	naaaa++;
	}
	cout<<n<<" "<<na<<" "<<naa<<" "<<naaa<<" "<<naaaa<<endl;
	return 0;
}
