#include<stdio.h>

void multi(float a , float b , float result);

void main(void)
{
	printf("\tthis programe designed to take a two floating values \n \tfrom the userand the program wil print multiplaction result.\n");
	multi(0 , 0 , 0);
}
void multi(float a , float b ,float result)
{
	printf("enter value one :");
	scanf("%f",&a);
	printf("enter value two :");
	scanf("%f",&b);
	result = a * b;
	printf("\tresult = %f\n",result);
}