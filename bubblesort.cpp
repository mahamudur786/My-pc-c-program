#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int Arr[])
{
	int i,j,temp=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(Arr[j]>=Arr[j+1])
			{
			Arr[j]=Arr[j]+Arr[j+1];
			Arr[j+1]=Arr[j]-Arr[j+1];
			Arr[j]=Arr[j]-Arr[j+1];	
			}
		}
	}
}
int main()
{
	int A[5]={6,3,8,2,1};
	cout<<"Array element before Bubble sorting"<<endl;
	for(int x=0;x<5;x++)
	{
		cout<<A[x]<<" ";
	}
	BubbleSort(A);
	cout<<endl<<"Array element after Bubble sorting"<<endl;
	for(int x=0;x<5;x++)
	{
		cout<<A[x]<<" ";
	}
	return 0;
}
