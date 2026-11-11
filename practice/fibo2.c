#include<stdio.h>

int main()
{
	int first;
	int second;
	int third=0;
	
	int lim;
	
	printf("\n program to generate fibonacci sequence");
	
	printf("\n enter the number till which the sequence has to be generated");
	scanf("%d",&lim);
	
	first=0;
	second=1;
	
	if(lim>=0)
	{
	printf("\n %d",first);
	}
	
	if(lim>=1)
	{
	printf("\n %d",second);
	}
	
	while(1)
	{
		third = first+second;
		if(third>lim)
		{
			break;
		}
		first=second;
		second=third;
		printf("\n %d",third);
	}
	
	
	
}	
