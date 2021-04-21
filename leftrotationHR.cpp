#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[5]={1,2,3,4,5};
	int d,j=0,i;
	cout<<"Right rotation"<<endl<<"please enter rotation no to rotate"<<endl;
	cin>>d;
	for(i=0;i<5;i++)
	{
		if((i-d)<0)
		{
		j=5+(i-d );	
		cout<<A[j]<<" ";
		}
		else{
		j= (i-d);
		cout<<A[j]<<" ";	
		}
	}
	return 0;
}
