#include<stdio.h>

int main()
{
	int num;
	int sumod=0;
	int sumev=0;
	int rem;
	
	printf("\n program to find sum of odd and even numbers");
	printf("\n");
	
	
	printf("\n enter the integer number");
	scanf("%d",&num);
	
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		
		if(rem%2==0)
		{
			sumev=sumev+rem;
		}
		else 
		{
			sumod=sumod+rem;
		}
		
	}
	
	printf("\n the sum of odd numbers is %d",sumod);
	printf("\n the sum of even numbers is %d",sumev);
	printf("\n");
}
