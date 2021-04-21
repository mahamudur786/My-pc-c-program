#include<bits/stdc++.h>
using namespace std;
int solve(string s) {
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==s[0])
        {
            index = i;
            break;
        }
        else{
            index = -1;
        }

    }
    return index;
}
int main(){
	string s;
	cin >> s;
	int m = solve(s);
	cout << m <<"\n";
 	return 0;
}

