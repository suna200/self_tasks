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
void func_1(int *pointer_of_start);
void func_2(int *array_pointer);
//void print_array_value(int *ptr,int size);
/******************************************************
*main function*
******************************************************/

void main(void)
{
	int input=0;
	int arr[12];
	func_1(&input);
	if(input ==1)
	{
		func_2(arr);
		
	}
	else{printf("\n thank you");}
	
	
}


/******************************************************
	*implementions*
******************************************************/

/******************************************************
	*function 1*
******************************************************/
void func_1(int (*pointer_of_start))
{
	int x=0;
	printf("\t this algorithm will recive array values from you \n \t sorting them and then allow you to siwtch for a certain \n \t values that you provide before");
	printf("\n");
	printf("\n \t press 1 + enter to start \n \t press 2+enter to exit the programe \n");
	scanf("\n %d",& x);
	*pointer_of_start=x;
		if(*(pointer_of_start)==1)
		{
			printf("welcme");
		}
		else if(*(pointer_of_start) == 2)
		{			printf("goodby");}
		else	{printf("wrong input");}
}


/******************************************************
	*function 2*
******************************************************/
void func_2(int *array_pointer)
{
	int counter=0,counter_2,counter_3;
	for(counter=0;counter<12;counter++)
	{
		printf("\n enter value of the array %d : ",counter);
		scanf("%d",&array_pointer[counter]);
	}
	for(counter_2=0;counter_2<11;counter_2++)
	{
		for(counter_3=0;counter_3<(11-counter_2);counter_3++)
		{
			if(array_pointer[counter_3] > array_pointer[counter_3+1])
			{
				array_pointer[counter_3]=array_pointer[counter_3]*array_pointer[counter_3+1];
				array_pointer[counter_3+1]=array_pointer[counter_3]/array_pointer[counter_3+1];
				array_pointer[counter_3]=array_pointer[counter_3]/array_pointer[counter_3+1];				
			}
		}
	}
	for(counter=0;counter<12;counter++)
	{
		printf("\n enter value of the array %d",array_pointer[counter]);
	}
}