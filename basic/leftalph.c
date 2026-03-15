	#include<stdio.h>

	int main()
	{
		int num=5;
		for(int i=0;i<num;i++)
		{
			
			for(int j=0;j<2*(num-i);j++)
			{
				printf(" ");
			}
			
			//printf(" ");
			
			for(int k=0;k<=i;k++)
			{
				//printf(" ");
				printf("%c ",k+'A');
			}
		
			printf("\n");
		}
	}
		
