/************************************************************
 * this code can be write with all types of function		*
 * void fun(void)							    			*
 * void fun(int)										    *			
 * int fun(void)							     		    *			
 * int fun(int)                                             *
 ************************************************************
*/

/******************************************************
*decleration*
******************************************************/

#include<stdio.h>
int summition(int *ptr1,int *ptr2);
/******************************************************
*main function*
******************************************************/

void main(void)
{
	int value1,value2,result;
	printf("please enter the first valu");
	scanf("%d",&value1);
	printf("please enter the second value");
	scanf("%d",&value2);
	result = summition(&value1,&value2);
	printf("the summition of the two values = %d",result);
}
/******************************************************
	*implementions*
******************************************************/
/******************************************************
	*function 1*
******************************************************/

int summition(int *ptr1,int *ptr2)
{
	int sum = *ptr1 + *ptr2;
	return sum;
}