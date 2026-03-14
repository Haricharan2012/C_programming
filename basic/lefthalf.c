#include<stdio.h>

int main()
{
	int num=5;
	
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num;j++)  // i=1 ->j=1  , i=2 --> j=1,2 , i=3 --> j=1,2,3 , i=4 --> j=1,2,3,4 ,i=5 --> j=1,2,3,4,5
		{
		
		       printf(" ");
			if(j<=(num-i))  
			{
		        printf(" ");
		        }
		        else
		        {
			printf("%d",(num-i));
			} 
			
		//	printf("*");
			
		}
		
		printf("\n");
	}
}
