#include<stdio.h>

void main(void)
{
	int arr[10];
	int i=0,i2=9;
	for(i=0;i<10;i++)
	{
		i++;
		printf("enter values number %d ",i);
		i--;
		scanf("%d",&arr[i]);
	}
	for(int i=9;i>=0;i--)
	{
		printf("\n value number %d = %d \n",i,arr[i]);
	}
	
}