#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int testcases;
  cin >> testcases;
  while(testcases--){
    int n;
    int a=1;
    cin >>n;
    int *ptr;
    ptr = new int[n];
    //sort(ptr,ptr+n);
    for(int i=1;i<n;i++)
    {
      if(ptr[i]>ptr[0])
      {
        a = a + 2;
      }
      else{
        a++;
      }
    }
    cout << a <<" ";
  }
  return 0;
}

