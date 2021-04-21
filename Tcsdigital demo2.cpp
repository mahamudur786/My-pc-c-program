#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cin >> size;
  long long arr[size];
  int max=0,sum=0;
  for(int i = 0; i<size; i++)
  {
    cin >> arr[i];
  }
  for(int p=0;p<size-1;p++)
  {
    for (int i = p+1; i < size-1; ++i)
    {
      max = arr[p]+arr[i]+arr[i+1];
    }
  if(max>=sum)
      sum = max;
  }
  cout << sum << endl;
  return 0;
}
