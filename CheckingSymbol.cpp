#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	char ch = s[0];
	if (ch>=65 && ch<=90)
		cout<<"Uppercase Alphabet\n";
	else if (ch>=97 && ch<=122)
		cout<<"Lowercase Alphabet\n";
	else if (ch>=48 && ch<=57)
		cout<<"Number\n";
	else if ((ch>=0 && ch<=47) || (ch>=58 && ch<=64) ||(ch>=91 && ch<=96) || (ch>=123 && ch<=127))
		cout<<"Special Symbol\n";
	return 0;
}
