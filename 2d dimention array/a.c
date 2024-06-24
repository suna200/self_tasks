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
//void array(int arr[],int size);
/******************************************************
*main function*
******************************************************/
//int minimum;

void main(void)
{

	int arr[4][4] ={0},x=0;
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf(" enter value ");
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<4;j++)
		{
			printf("%d \t",arr[i][j]);
		}
	}

}


/******************************************************
	*implemention*
******************************************************/

/*void array(int arr[],int size)
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
}*/