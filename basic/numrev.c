#include<stdio.h>

int main()
{
	int num=5;
	
	
	//loop for rows
	
	for(int i=0;i<num;i++)
	{
		//LOOP FOR SPACES 
		
		for(int j=0;j<2*i;j++)
		{
			printf("#");
		}
		
		//loop for stars
		
		for(int k=0;k<2*(num-i)-1;k++)
		{
			printf("%d ",k+1);
		}
		
		printf("\n");
	}
}


	
