#include <bits/stdc++.h>
using namespace std;
int main()  
{  
    string s;
    cin >> s;    
    unordered_map<char,int>umap;
    umap.insert(make_pair('I',1));
    umap.insert(make_pair('V',5));
    umap.insert(make_pair('X',10));
    umap.insert(make_pair('L',50));
    umap.insert(make_pair('C',100));
    umap.insert(make_pair('D',500));
    umap.insert(make_pair('M',1000));
    int result = umap[s[s.size()-1]];
    for (int i = s.size()-2; i >= 0; --i)
    {
    if(umap[s[i]]<umap[s[i+1]])
        result -= umap[s[i]];
    else
        result += umap[s[i]];
    }
    cout << result;
    return 0;
} 
