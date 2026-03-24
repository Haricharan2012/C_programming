#include<stdio.h>
#include<math.h>

int main()
{

    for(int value=1;value<=100;value++)
     {
	//int value;
	//int size;
	int new=0;
	int num=value;
	int num2=value;
	int rem=0;
	int count=0;
	int ori=value;
	//printf("\n enter a number: ");
	//scanf("%d",&value);
	
	
	
	//num=value;
	

	//count number of digits//
	while(num!=0)
	{
		num=num/10;
		count=count+1;
	}
	
	//size=count;
	//----------------------//
	
	
	//printf("\n the count val is %d",count);
	//printf("\n the size is %d",size);
	//printf("\n the num is %d",num);
	
	while(num2!=0)
	{
		rem=num2%10;
		num2=num2/10;
		//new=new+(rem*rem*rem);
		new=new+(int)pow(rem,count);
		//printf("\n the rem is %d",rem);
		//printf("\n the num is %d",num);
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
	
}
		
