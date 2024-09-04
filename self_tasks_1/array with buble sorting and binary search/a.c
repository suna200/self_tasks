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
void array(int arr[4]);
void printmyarr(int arr[],int size);
int arr[10] ={4,2,7,5,45,77,62,51,15,74};
int number;
void bubble_sorting(int number);
/******************************************************
*main function*
******************************************************/

void main(void)
{

	array(arr);
	printmyarr(arr,10);
	bubble_sorting(number);

}


/******************************************************
	*implementions*
******************************************************/

/******************************************************
	*function 1*
******************************************************/
void array(int arr[10])
{	
	int i,j;

	for(i=0;i<9;i++)
	{
		for(j=0;j<(9-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j] * arr[j+1];
				arr[j+1]=arr[j]/arr[j+1];
				arr[j]=arr[j]/arr[j+1];
			}
		}
	}
}

/******************************************************
	*function 2*
******************************************************/

void printmyarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
}


/******************************************************
	*function 3*
******************************************************/

void bubble_sorting(int number)
{
	int first =0;
	int last =9;
	int midle;
	int flag=0;
	printf("enter the number you are looking for\n");
	scanf("%d",&number);
	while(first<=last)
	{
		midle=(last+first)/2;
		if(arr[midle]==number)
		{
			flag=1;
			break;
		}
		else if (arr[midle]<number)
		{
			first+=1;
			
		}
		else if(arr[midle]>number)
		{
			last=last-1;
			
		}
	}
	if(flag==1){printf("the number you are looking for in index : %d\n",midle);}
	else{printf("the number you are looking for is not exist");}
}