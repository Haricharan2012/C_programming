#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	int rem;
	
	printf("\n program to convert binary to decimal");
	
	printf("\n enter the bin number");
	scanf("%d",&num);
	
	int rest=0;
	int count=0;
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		rest=rest+rem*(int)pow(2,count);
		count=count+1;
	}
		
	printf("\n the count is  %d",count);
	printf("\n the converted  decimal number is %d",rest);
}
