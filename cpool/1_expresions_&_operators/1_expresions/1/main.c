


#include <stdio.h>
void main(void)
{
    float a,b,c,d,result;
    printf("\tthis program is designed to take from user 4 values,\n \tthen print the ratio of (a+b)/(c-d)\n");
    printf("\tenter the firest value A : ");
    scanf("%f",&a);
    printf("\tenter the second value B : ");
    scanf("%f",&b);
    printf("\tenter the 3rd value C : ");
    scanf("%f",&c);
    printf("\tenter the 4th value D : ");
    scanf("%f",&d);
    if((c-d) != 0)
    {
        result=(a+b)/(c-d);
        printf("%f",result);
    }
    else{printf("\terror devision by zero");}
}
