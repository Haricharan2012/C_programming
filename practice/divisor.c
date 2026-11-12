#include<stdio.h>

int main()
{
	int num;
	printf("\n enter a number to find divisors of it");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			//printf("\n %d is a divisor of %d",i,num);
			printf("%d ",i);
			
		}
		
	}
	printf("\n");
}
	
