#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Mcap,Bcap,cap,fillcap=0,flag=0,count=0;
	label:
	cout<<"Enter Bucket capacity"<<endl;
	cin>>Bcap;
	cout<<"Enter mog capacity"<<endl;
	cin>>Mcap;
	cap=0.8*Bcap;
	if(Mcap<Bcap)
	{
	while(cap>fillcap)
	{
	fillcap+=Mcap;
	count++;
	flag=1;	
	}
	if(flag==1)
	{
		cout<<"Bucket Full!"<<endl;
		cout<<"Mag capacity" <<count<<endl;
	}
	}
	else
	{
		cout<<"Please Enter mog capacity less than Bucket capacity"<<endl;
		goto label;
	}
	return 0;
}
