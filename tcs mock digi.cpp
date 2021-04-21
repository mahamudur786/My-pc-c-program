#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
long long no,sq,rem; 
cin >> no; 
sq = no * no; 
rem = sq%10; 
if(no<0)
cout<< "Wrong Input\n"; 
else if(no == rem){
 cout<<"Correct Number\n";
  } 
  else if(no!=rem)
  cout <<"Incorrect Number\n";
 return 0; 
 }
