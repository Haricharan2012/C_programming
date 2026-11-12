#include<stdio.h>

int main()
{
	int num;
	int flag=0;
	
	printf("\n prime number upto n");
	
	printf("\n enter a number to generate primes till it");
	scanf("%d",&num);
	
	
	if(num<2)
	{
		printf("\n invalid number, try again");
	}
	else
	{
	
		for(int i=2;i<=num;i++)
		{
			flag=0;               //reset flag for every nunmber
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
				
			}
			if(flag==0)
			{
				printf("\n%d",i);
			}
		}
	}
}
