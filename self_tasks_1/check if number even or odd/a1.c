#include<stdio.h>

void main(void)
{
	int number, result;
	printf("enter any number to check wether it is even or odd");
	scanf("%d",&number);
	result=number%2;
	if(result==0)
	{
		printf("the number : %d is even", number);
	}
	else{		printf("the number : %d is ODD", number);}
	
}

