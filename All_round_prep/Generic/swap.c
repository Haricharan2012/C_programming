
//swap two numbers without third variable temp

#include<stdio.h>

int main()
{

int x=5;
int y=20;

printf("\n ------before swap-----");

printf("\n value of x is %d",x);
printf("\n value of y is %d",y);

y=y-x;//20-5=15
x=x+y;//5+15=20
y=x-y;//20-15=5

printf("\n ------After swap-----");

printf("\n value of x is %d",x);
printf("\n value of y is %d",y);



}
