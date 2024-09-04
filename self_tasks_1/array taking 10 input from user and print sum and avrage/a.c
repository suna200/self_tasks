#include<stdio.h>

void main(void)
{
	int arr[10],i=0;
	float avr=0,sum=0;
	for(i=0;i<10;i++)
	{
		i++;
		printf("enter values number %d ",i);
		i--;
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
		
	}		
	avr=sum/i;
	printf("the summetion = %f \n",sum);
	printf("the avrage = %.2f",avr);	
}