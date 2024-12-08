#include<stdio.h>
#include<math.h>


void power();

void main(void)
{
	printf("\tthis programe designed to take a two values \n \tfrom the user to find thire power using pow() functionn.\n");
	power();
}
void power(void)
{
	int base,power,result;
	printf("enter base :");
	scanf("%d",&base);
	printf("enter power :");
	scanf("%d",&power);
	result=pow(base,power);
	printf("\tperimeter = %d\n",result);
}