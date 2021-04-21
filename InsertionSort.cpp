#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
	int i,key,j=0;
	for(i=1;i<n;i++)
	{
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int ss;
	cout<<"Enter the array size you want to be sorted by insertion sorting method"<<endl;
	cin>>ss;
	int myarr[ss];
	cout<<"\nEnter the array element"<<endl;
	for(int x=0;x<ss;x++)
	{
		cin>>myarr[x];
	}
	cout<<"Printing the array element before sorting"<<endl;
	for(int x=0;x<ss;x++)
	{
		cout<<myarr[x]<<" ";
	}
	cout<<"\nPrinting the array element After sorting"<<endl; 
	insertionSort(myarr,ss);
	for(int x=0;x<ss;x++)
	{
		cout<<myarr[x]<<" ";
	}
	return 0;
}

