#include <bits/stdc++.h>
using namespace std;
int max(int,int,int,int);
int max(int a,int b, int c, int d)
{
int x,z;
x= a>b ? a:b;
z= c>d? c:d;

return x>z?x:z;
}
int main() {
    int a, b, c, d,maximum;
    cin>>a>>b>>c>>d;
    maximum= max(a,b,c,d);
    cout<<maximum;
    return 0;
}
