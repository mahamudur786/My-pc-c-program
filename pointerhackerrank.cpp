#include<iostream>
using namespace std;
void update(int &a, int &b)
{
    int olda =a;
    a=a+b;
    if(olda > b)
    {
        b= olda-b;
    }
    else{
        b=b-olda;
    }

}
int main()
{
int a,b;
cin >> a >>b;
int *apointer =&a;
int *bpointer= &b;
update(a,b);
cout << a << "\n" << b ;
}

