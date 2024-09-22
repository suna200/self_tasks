#include<stdio.h>
void main(void)
{
	int a,b;
	float x,y,result;
	printf("\tthis programe designed to take a two values \n \tfrom the user and print the division and modules\n");
	printf("enter value one :");
	scanf("%d",&a);
	printf("enter value two :");
	scanf("%d",&b);
    result = a % b;
	printf("\n modules = %f",result);	
    x=a;
	y=b;
	result = x/y;
	printf("\n devision = %f",result);	
}