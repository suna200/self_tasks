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
void sum(void);
int x=10; //blobal variable
int y=23; //global variable

/******************************************************
*main function*
******************************************************/


void main(void)
{
	//int max;
	sum();


}


/******************************************************
*implemention*
******************************************************/

void sum(void)
{	
	int z;
	z=x;
	x=y;
	y=z;
	printf("x = %d \n" ,x);
	printf("y = %d" ,y);
	//return x,y;
}