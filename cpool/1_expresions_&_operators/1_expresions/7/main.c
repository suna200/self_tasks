#include<stdio.h>

void multi(int a , int b );

void main(void)
{
	printf("\tthis programe designed to take a two values \n \tfrom the user to calculate teh perimeter of rectangle.\n");
	multi(0 , 0);
}
void multi(int a , int b )
{
	printf("enter length :");
	scanf("%d",&a);
	printf("enter width :");
	scanf("%d",&b);
	printf("\tperimeter = %d\n",2*(a + b));
}