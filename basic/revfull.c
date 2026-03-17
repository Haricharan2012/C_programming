#include<stdio.h>

int main()
{
	int num=5;
	//loop for rows
	
	for(int i=num-1;i>=0;i--)
	{
		//loop for spaces 
		for(int j=0;j<(num-1-i);j++)
		{
			printf(" ");
		}
		
		//loop for stars
		for(int k=0;k<(2*i+1);k++)
		{
			//printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
				
	

