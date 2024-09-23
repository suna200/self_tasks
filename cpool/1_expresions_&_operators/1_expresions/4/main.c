#include<stdio.h>

void swap(int a , int b);

void main(void)
{
	printf("\tthis programe designed to take a two values \n \tfrom the user then make a swap betwnn them then print the new values\n");
	swap(0 , 0);
}
void swap(int a , int b)
{
	int w;
	printf("enter value one :");
	scanf("%d",&a);
	printf("enter value two :");
	scanf("%d",&b);
	w = a;
	a = b;
	b = w;
	printf("\tvalue one = %d\n",a);
	printf("\tvalue two = %d\n",b);
}