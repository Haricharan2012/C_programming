#include<stdio.h>
#include<math.h>

int main()
{
	int num=0;
	int rem=0;
	int res=0;
	
	printf("\n enter an octal number ");
	scanf("%d",&num);
	
	int tnum=num;
	int count=0;
	
	while(tnum!=0)
	{
		rem=tnum%10;
		tnum=tnum/10;
		res=res+(rem*pow(8,count));
		count=count+1;
	}
	
	printf("\n the decimal number is : ");
	printf("%d",res);
}
