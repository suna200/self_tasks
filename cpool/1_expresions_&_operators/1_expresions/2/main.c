#include<stdio.h>
void main(void)
{
	char x;
	printf("\tthis programe designed to take a character\n \tfrom the user and print it with its ASKII code\n");
	printf("enter a character");
	scanf("%c",&x);
	printf("the character is : %c and it ASKII = %d",x,x);	
}