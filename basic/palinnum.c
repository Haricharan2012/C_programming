#include<stdio.h>

int main()
{
	int num;
	
	printf("\n enter a number:");
	scanf("%d",&num);
	
	int ori=num;
	int tempnu=num;
	int rem=0;
	int rev=0;
	
	while(tempnu!=0)
	{
		rem=tempnu%10;
		tempnu=tempnu/10;
		rev=rev*10+rem;
	}
	
	if(rev==ori)
	{
		printf("\n number is a palindrome number");
	}
	else
	{
		printf("\n number is not a palindrome");
	}
}
