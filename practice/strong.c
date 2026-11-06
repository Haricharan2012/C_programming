#include<stdio.h>

int fact(int);

int main()
{
	int num;
	int sum=0;
	int rem;
	
	printf("\n Enter a number");
	
	scanf("%d",&num);
	
	int org = num;
	
	//seperate digits from num
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+fact(rem);
	}
	
	printf("\n the sum is %d",sum);
	
	if(sum==org)
	{
		printf("\n number is an strong number");
	}
	else
	{
		printf("\n its not a strong number");
	}
	
}

int fact(int rem)
{
	int facto=1;
	
	while(rem!=0)
	{
		facto=facto*rem;
		rem=rem-1;
	}
       return facto;
}
	
	

