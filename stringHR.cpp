#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2;
	cin.ignore();
	s3=s1;
	cout<< s1.size() <<" "<<s2.length()<<endl;
	cout<<s1+s2<<endl;
	s3[0]=s2[0];
	s2[0]=s1[0];
	cout<<s3+s2<<endl;
	return 0;
}
