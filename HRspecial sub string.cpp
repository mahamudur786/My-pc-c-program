//https://www.hackerrank.com/challenges/special-palindrome-again/
//problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D=arcesium


#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
  long ans=n;
  for(int i=0;i<s.size();i++)
  {
    int repeat=0;
    while(i+1<s.size() && s[i]==s[i+1])
    {
      repeat++;
      i++;
    }
    ans+=(repeat*(repeat+1))/2;
    int pointer=1;
    while(i-pointer>=0 && i+pointer <s.size() && s[i+pointer]==s[i-1] && s[i-pointer]==s[i-1])
    {
      ans++;
      pointer++;
    }
  }
  return ans;
}

int main()
{

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    cout << result << "\n";

    return 0;
}

