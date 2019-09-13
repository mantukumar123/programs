#include<stdio.h>
int main()//swapping of two numbers
{
int x,y;
printf("Enter the vlue of x");
scanf("%d",&x);
printf("Enter the value of y");
scanf("%d",&y);
x=x+y;
y=x-y;
x=x-y;
printf("%d=x%d=y",x,y);
}
