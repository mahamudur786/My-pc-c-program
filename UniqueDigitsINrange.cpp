#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s="";
  int a,b;
  cin >> a >> b;
  for(int i =a;i<=b;i++)
  {
  	ostringstream str1;
  	str1 << i;
  	string geek = str1.str();
  	s = s + geek;
  }
  for(int i =1;i<s.size();i++)
  {
  	int flag =0;
  	for(int j =0;j<i;j++)
  	{
  		if(s[i]==s[j])
  		flag++;
	}
	if(flag==0)
		cout << s[i];        
  }
  //cout << s << endl;
  return 0;
}
