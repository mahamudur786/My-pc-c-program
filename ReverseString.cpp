// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends

string reverseWords(string S) 
{ 
 string S2;
 int r;
 int len = S.size();
 for(int i= len-1;i>=0;i--)
 {
     if(S[i]=='.'){
         r = len-i;
         len =i-1;
         S2.append(S.substr(i+1,r));
         S2.append(".");
     }
 }
 S2.append(S.substr(0,len+1));
 return S2;
} 
