#include<stdio.h>

int main()
{
	int num;
	int rem;
	int rev=0;
	
	
	printf("\n palindrome number");
	printf("\n");
	
	printf("\n enter a number");
	scanf("%d",&num);
	
	int org=num;
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	
	if(org==rev)
	{
		printf("\n number is a palindrome");
	}
	else
	{
		printf("\n number is not a palindrome");
	}
	
	printf("\n");
	
	
	
}
	
	
