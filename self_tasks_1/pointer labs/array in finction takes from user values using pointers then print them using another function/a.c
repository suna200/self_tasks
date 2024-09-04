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
void set_array_value(int *ptr,int size);
void print_array_value(int *ptr,int size);
/******************************************************
*main function*
******************************************************/

void main(void)
{

	int arr[5],size=5;
	set_array_value(arr,size);
	print_array_value(arr,size);

}


/******************************************************
	*implementions*
******************************************************/

/******************************************************
	*function 1*
******************************************************/
void set_array_value(int *ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("enter array %d value",(i+1));
		scanf("%d",&ptr[i]);
	}
}

/******************************************************
	*function 2*
******************************************************/

void print_array_value(int *ptr,int size)
{
	int index=0;
	for(int i=0;i<size;i++)
	{
		index++;
		printf("arr of %d = %d \n",index,ptr[i]);
	}
}