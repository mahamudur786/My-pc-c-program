#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    // Initialize String Array
    string isnot;
   // int i;
    int iskeyword=0;
    cin>>isnot;
	string keyword[16] = { "break", "case" ,"continue", "default" , 
	"defer", "else", "for","func","goto","if","map","range","return", "struct","type","var" };
 
    // Print Strings
    for ( int i = 0; i < 16; i++)
    {
	if(isnot.compare(keyword[i])==0)
		{
		iskeyword=1;
		break;
		}
	}
	if(iskeyword==1)
	cout<<isnot <<" is a keyword"<<endl;
	else{
	cout<<isnot <<" is not a keyword"<<endl;	
	}
	return 0;
}
