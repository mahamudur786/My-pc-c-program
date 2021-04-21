// https://www.prepdrive.in/tcs/nqt/tcs-nqt-programming-5
#include<bits/stdc++.h>
int main()
{
	int ni,ne,i;
	float pcni=18,pcne=12,totalcost=0,temp;
	scanf("%d %d",&ni,&ne);
	if(ni<0 || ne<0)
	printf("INVALID OPTION");
	else if(ni==0 || ne== 0)
	printf("The printing cost is 0");
	else
	{
		for(i=1;i<=ni;i++)
		{
		scanf("%f",&temp);
		totalcost=totalcost+temp*pcni;	
		}
		for(i=1;i<=ne;i++)
		{
		scanf("%f",&temp);
		totalcost=totalcost+temp*pcne;	
		}
	printf("Total estimated Cost : %1f\n",totalcost);	
	}
	return 0;
}
