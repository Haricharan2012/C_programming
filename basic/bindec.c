#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	int count=0;
	int res=0;
	
	printf("\n enter a number");
	scanf("%d",&num);
	
	
	int cnum=num;
	int tnum=num;
	
	while(cnum!=0)
	{
		cnum=cnum/10;
		count=count+1;
	}
	
	int pcount=0;
	int rem=0;
	while(tnum!=0)
	{
		rem=tnum%10;
		tnum=tnum/10;
		res=res+(rem*(int)pow(2,pcount));
		pcount=pcount+1;
	}
	
	printf("\n the decimal number is %d",res);
}
	
	
