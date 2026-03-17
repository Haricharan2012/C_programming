#include<stdio.h>

int main()
{
	int num=5;
	
	
	//loop for rows
	
	for(int i=0;i<num;i++)
	{
	
		//loop for spaces
		for (int k=0;k<2*(num-i);k++)
		{
			printf(" ");
		}	
		
		//loop for col
		for(int j=0;j<2*i+1;j++)
		{
			printf(" ");
			printf("%d",j+1);
		}
		printf("\n");
	}
}
	
	
