#include <iostream>
using namespace std;
int fact(int);

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return (n*fact(n-1));
}

int main() {
	int tt;
	scanf("%d",&tt);
	while(tt--)
	{
	    int no;
	    scanf("%d",&no);
	    printf("%d",fact(no));
	    printf("\n");
	}
	return 0;
}

