#include<stdio.h>

void main(void)
{
	int grade;
	printf("please enter your grade");
	scanf("%d",&grade);
	if(0<=grade && grade<50)	  {printf("Failed");}
	else if(50<=grade && grade<65){printf("Normal");}
	else if(65<=grade && grade<75){printf("good");}
	else if(75<=grade && grade<85){printf("very good");}
	else if(85<=grade)   {printf("excelent");}
	else{printf("unvalid input");}
}