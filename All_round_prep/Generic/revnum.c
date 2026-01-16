#include<stdio.h>

int main()
{

int rem,rev=0,num,n;
printf("\n program to reverse a number");
printf("\n----------------------------");

printf("\n enter a number");
scanf("%d",&n);

num=n;

while(num!=0)
{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}

printf("\n the reverse of the number is %d",rev);

}
