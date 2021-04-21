#include<bits/stdc++.h>
using namespace std;
int main()
{
	string input="";
	int length,a_count=0,e_count=0,i_count=0,o_count=0,u_count=0;
	getline(cin,input);
	length = input.length();
	for(int i=0;i<length;i++)
	{
		if(input[i]==('a'))
		a_count++;
		else if(input[i]==('e'))
		e_count++;
		else if(input[i]==('i'))
		i_count++;
		else if(input[i]==('o'))
		o_count++;
		else if(input[i]==('u'))
		u_count++;
	}
		cout<<"a:"<<a_count<<endl;
		cout<<"e:"<<e_count<<endl;
		cout<<"i:"<<i_count<<endl;
		cout<<"o:"<<o_count<<endl;
		cout<<"u:"<<u_count<<endl;
	return 0;
}
