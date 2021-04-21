#include <iostream>
using namespace std;
int main()
{
    int size,i,j,sum1=0,sum2=0,abs;
    cin>>size;
    int a[size][size];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>a[i][j];
            cin.ignore();
        }
    }
    for(i=0;i<size;i++)
    {
       sum1=sum1+a[i][i]; 
       sum2=sum2+a[i][size-1-i];
    }
    abs=sum2-sum1;
    cout<<"The absolute difference of the diagonal sum"<<endl;
    if(abs>0)
    cout<<abs;
    else
    {
    cout<<(-1*abs);
    }
return 0;
}
