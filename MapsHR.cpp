#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string,int>m;
    int testcase;
    string x;
    int queries,marks;
    cin>>testcase;
    while(testcase--)
    {
      cin>>queries;
      if(queries==1)
      {
        cin>>x>>marks;
        m.insert(make_pair(x , marks));
      }
      else if(queries==2)
      {
        cin>>x;
        m.erase(x);
      }
      else if(queries==3)
      {
        cin>>x;
        map<string,int>:: iterator itr=m.find(x);
        if(itr==m.end())
        cout<<0;
        else {
        cout<<itr->second;
        }
      }
    } 
    return 0;
}

