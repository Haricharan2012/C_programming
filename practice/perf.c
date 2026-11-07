#include<stdio.h>

int main()
{
	int num;
	int sum=0;
	
	
	printf("\n perfect number");
	printf("\n enter the number you want to check");
	scanf("%d",&num);    //6
	int org = num;
	
	for(int i=1;i<num/2;i++)   //1,2,3,4,5
	{
		if(num % i==0)   //num%1,num%2,num%3,...
		{
			sum=sum+i;  // 0+1,1+2,3+3a
		}
	}
	
	if(sum==org)
	{
		printf("\n number is a perfect number");
	}
	else
	{
		printf("\n number is not a perfect number");
	}
	
}
	
	
