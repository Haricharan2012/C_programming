#include<stdio.h>

int main()
{
	int num=5;
	
	//loop for row
	
	for(int i=1;i<=num;i++)
	{
		//loop for whitespace
		
		for(int j=1;j<=(num-i);j++)
		{
			printf(" ");
		}
		
		//loop for column element
		
		for(int k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		
		printf("\n");
	
	}
	
}
