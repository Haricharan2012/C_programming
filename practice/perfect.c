#include<stdio.h>

int main()
{
	int num;
	int sum=0;
	
	
	printf("\n enter the number to check if it's a perfect number");
	scanf("%d",&num);   //6
	
	int org=num;
	
	int div[num]={};
	
	//check divisor for the number
	
	for(int i=1;i<num;i++)   // i<6 = 1,2,3,4,5
	{
		if(num % i==0)    //6% 1 to 5
		{
			div[i]=i;   // div[1]=1, div[2]=2, div[3]=3
		}
	}
	
	//sum calculation

	for(int i=1; i<num;i++)
	{
		sum=sum+div[i];    //sum=sum+ 1, 1+2 ,3+3 
	}
	
	if(sum==org)
	{
		printf("\n it is a perfect number");    // YES 6 is a perfect number
	}
	else
	{
		printf("\n it is not a perfect number");
	}
	printf("\n");
}
