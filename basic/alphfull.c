#include<stdio.h>

int main()
{

	int num=5;
	
	//loop for row 
	
	for(int i=0;i<num;i++)
	{
		//loop for spaces
		
		for(int j=0;j<2*(num-i);j++)
		{
			printf(" ");
		}
			//loop for alphabets 
			
		for(int k=0;k<2*i+1;k++)
		{
			printf(" ");
				
			printf("%c",'A'+ k);
		}
		printf("\n");
		
	}
}
		
	
	
