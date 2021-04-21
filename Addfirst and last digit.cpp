#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--)
  {
  int temp;
  cin>>temp;
  int n   = temp / 10;
  int rem = temp % 10;
  while(n>=10)
  {
    n = n / 10; 
  }
  int sum = n + rem ;
  cout << sum << endl;
  }
  return 0;
}

