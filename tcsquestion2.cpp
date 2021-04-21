// https://www.prepdrive.in/tcs/nqt/tcs-nqt-programming-2 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,i;
	cin>>size;
	int* arr1;
	int* arr2;
	arr1 = new int[size];
	arr2 = new int[size];
	for(i=0;i<size;i++)
	{
		cin>>arr1[i];
	}
	for(i=0;i<size;i++)
	{
		arr2[i]=i+1;
	}
	//sorting the taken array
	sort(arr1, arr1 + size);
	for ( i = 0; i < size; i++)
        if (arr1[i] != arr2[i]){
	    cout<<"the missing no is "<<i+1<<endl;
       // break;
	}
	
    return 0;
	
}
