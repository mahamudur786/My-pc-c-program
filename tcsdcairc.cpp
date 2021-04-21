#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int test;
  cin >> test;
  while(test--)
  {
    string s;
    cin >> s;
    int n = s.size();
    string s1 = s.substr(1,n-1);
    string s2 = s1 + s[0];
    string s3 =  s.substr(0,n-1);
   reverse(s3.begin(), s3.end());
    string s5 = s3 + s[n-1];
    reverse(s5.begin(), s5.end());
    if(s2==s3)
      cout << 1<<"\n" ;
    else
      cout << 0 <<"\n" ;

    cout << s1 <<"\n";
    cout << s2 <<"\n";
    cout << s3 <<"\n";
    cout << s[n-1] <<"\n";
  }  
  return 0;
}
