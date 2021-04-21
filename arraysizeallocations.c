#include <stdio.h>

#include <stdlib.h>

int main()

{

int size;
int i;
int sum = 0;
int *ptr = (int *)malloc(sizeof(int) * size);
scanf("%d",&size);
printf("Enter the elements : ");

for(i = 0 ; i < size ; i++)

	{
	scanf("%d", &ptr[i]);
	}

for(i = 0 ; i < size ; i++)

	sum = sum + ptr[i];

printf("sum of all elements = %d \n",sum);

free(ptr);

}
