#include<stdio.h>

int main()
{
	int num;
	int flag=0;
	
	printf("\n check if number is prime or not!");
	
	printf("\n enter number");
	scanf("%d",&num);
	
	if(num<2)
	{
		printf("\n number is not prime number");

	}
	else
	{
	
		for(int i=2;i<num;i++)
		{
			if(num % i ==0)
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		
		
		if(flag==1)
                 {
                 
                  printf("\n number is not a prime number");
                 }
               	else
               	{
                  printf("\n number is a prime number");
                }
                
               		
               		
	}
}
