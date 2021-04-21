#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()

{
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll testcases;
  scanf("%lld",&testcases);
  while(testcases--)
  {
    string s;
    cin >> s;
    if(s[0]>=65 && s[0]<=90)
      cout << "Uppercase";
    else{
      cout << "Janina";
    }
  return 0;
  }
}
