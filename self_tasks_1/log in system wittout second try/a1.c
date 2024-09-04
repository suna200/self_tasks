#include<stdio.h>

void main(void)
{
	int ID, password;
	printf("please enter your ID");
	scanf("%d",&ID);
	
	if(ID == 1234)
			{
			printf("welcom Ahmed \n enter the password");
			scanf("%d",&password);
			if(password == 1234)
				{
					printf("log in compleated \n welcom");
				}
			else{printf("wrong password");}
			}
	else if(ID == 5678)
			{
			printf("welcom youssef \n enter the password");
			scanf("%d",&password);
			if(password == 5678)
			{
				printf("log in compleated \n welcom");
			}
			else{printf("wrong password");}
			}
	else if(ID == 1145)
		{
			printf("welcom mina \n enter the password");
			scanf("%d",&password);
			if(password == 1145)
			{
				printf("log in compleated \n welcom");
			}
			else{printf("wrong password");}
		}	
	else{printf("wrong ID");}
}