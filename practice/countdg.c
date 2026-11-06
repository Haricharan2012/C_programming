#include<stdio.h>

int main()
{
	int num;
	int count=0;
	int rem;
	
	
	printf("\n count of digits");
	printf("\n");
	
	printf("\n enter number to count");
	scanf("%d",&count);
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		count=count+1;
	}
	
	printf("\n the count is: %d ",count);
}
