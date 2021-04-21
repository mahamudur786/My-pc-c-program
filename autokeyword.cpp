#include<bits/stdc++.h>
#include<typeinfo>
using namespace std;
int main()
{
	int a = 8;
	double x = 90.7;
	string g = "abbabbba";
	cout<<typeid(a).name()<<endl;
	cout<<typeid(x).name()<<endl;
	cout<<typeid(g).name()<<endl;
	return 0;
}
