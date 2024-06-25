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
void array(int arr[],int size);
/******************************************************
*main function*
******************************************************/
int minimum;

void main(void)
{

	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		i++;
		printf("\n enter value number %d ",i);
		i--;
		scanf("%d\n",&arr[i]);
	}
	array(arr,10);
	//printf("\n %d\n",size);
	
}


/******************************************************
	*implemention*
******************************************************/

void array(int arr[],int size)
{	
	
	minimum = arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i] < minimum)
		{
			minimum=arr[i];
		}
	}
	printf("number %d",minimum);
}