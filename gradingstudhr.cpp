#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,next,p;
    cin>>n; 
    int grades[n];
    for(i=0;i<n;i++)
    {
        cin>>grades[i];
    }
    for(i=0;i<n;i++)
    {
        if(grades[i]<38)
        {
         grades[i]=grades[i];   
        }
        else {
        if(grades[i]%5!=0)
        {
         p=grades[i]/5;
         next = 5*(p+1);
         if(next-grades[i]<3)
         {
           grades[i]=next;  
         }
         else {
        grades[i]=grades[i];
         }   
        }
        else {
        grades[i]=grades[i];
        }
        }
    }
     for(i=0;i<n;i++)
    {
        cout<<grades[i]<<endl;
    }
    return 0;
}
