#include<stdio.h>
#include<math.h>

int main()
{
	int value;
	int size;
	int new=0;
	int num;
	int rem=0;
	printf("\n enter a number: ");
	scanf("%d",&value);
	
	int ori=value;
	
	num=value;
	int count=0;
	
	while(value!=0)
	{
		value=value/10;
		count=count+1;
	}
	size=count;
	
	//printf("\n the count val is %d",count);
	printf("\n the size is %d",size);
	printf("\n the num is %d",num);
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		//new=new+(rem*rem*rem);
		new=new+pow(rem,size);
		printf("\n the rem is %d",rem);
		printf("\n the num is %d",num);
	}
	
	printf("\n the number is %d",new);
	if(new==ori)
	{
		printf("\n the number is an armstrong number");
	}
	else
	{
		printf("\n the number is not an armstrong number");
	}
	
}
		
