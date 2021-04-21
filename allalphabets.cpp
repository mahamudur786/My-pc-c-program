#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string su;
	getline(cin,su);
	//transform into a single case 
	transform(su.begin(), su.end(), su.begin(), ::toupper);
	//removing all spaces
	for(int i=0;i<su.size()-1;i++)
	{
		if(su[i]==' ')
		{
			su.erase(su.begin()+i);
			i--;
		}
	}
	//checking alphabets
	set<char>sett;
	for(int i=0;i<su.size();i++)
	{
		if(su[i]>=65 && su[i]<=90)
			sett.insert(su[i]);
	}
	//check set of size 26
	if(sett.size()==26)
		cout <<"Yes";
	else
		cout <<"No";
	cout <<"\n"<< sett.size();
	return 0;
}
