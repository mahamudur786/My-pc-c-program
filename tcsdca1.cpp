#include<bits/stdc++.h>
using namespace std;
int main()
{
//0123456789
//9876543210
    //0<=n<=1000000
    long long n;
    cin >> n;
    if(n<0 || n>1000000)
        cout << "Wrong Input";
    else
    {
        string s = to_string(n);
        for (int i = 0; i < s.size(); ++i)
        {
            int x = s[i]+'0';
            x = (9-x);
            s[i] = x + '0';
        }
    cout << s << endl;
    }
    return 0;
}
