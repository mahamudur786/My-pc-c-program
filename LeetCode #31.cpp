/*
Brute Force

class Solution {
public:
    void nextPermutation(vector<int>& s) {
         vector<int> copy;
        copy = s;
        next_permutation(s.begin(),s.end());
        if(s==copy)
            sort(s.begin(),s.end());
        }
};
*/
class Solution {
public:
    void nextPermutation(vector<int>& s) {
        int l,k,n;
        n = s.size();
        for(k=n-2;k>=0;k--)
        {
            // k == 2
            if(s[k]<s[k+1])
                break;
        }
        if(k==-1)
           reverse(s.begin(),s.end());
        else
        {
           for(l = n-1;l>k;l--){
               if(s[l]>s[k])
                   break;
           }
        swap(s[k],s[l]);
          sort(s.begin()+k+1,s.end()); 
        }
        }
};
