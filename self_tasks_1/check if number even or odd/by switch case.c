#include<stdio.h>

void main(void)
{
	int number, result;
	printf("enter any number to check wether it is even or odd");
	scanf("%d",&number);
	result=number%2;
	switch(result)
	{
		case 0 :printf("your number : %d is even ", number);break;
		default :printf("your number : %d is odd ", number);break;
		
		
	}
	
}

