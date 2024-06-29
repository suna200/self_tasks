#include<stdio.h>

void main(void)
{
	int working_hours,houres,s,salary;
	printf("pleas enter your working houres");
	scanf("%d",&working_hours);
	//printf("enter number2");
	//scanf("%d",&y);
	if(working_hours<=40)
	{
		salary = working_hours *(0.9*50);
		printf("yoyr salary = %d", salary);
	}
	else{salary =working_hours *50;printf("yoyr salary = %d", salary);}
	
}

