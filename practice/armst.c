#include<stdio.h>

int main()
{
	int num;
	int rem;
	int sum=0;
	
	printf("\n enter a number");
	scanf("%d",&num);
	
	int org=num;
	
	while(num!=0)
	{
		
		rem=num%10;
		num=num/10;
		sum=sum+rem*rem*rem;
	}
	
	if(sum==org)
	{
		printf("\n the number is an armstrong number");
		
	}
	else
	{
		printf("\n the number is not an armstrong no");
		
	}
}
