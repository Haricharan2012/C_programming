#include<stdio.h>

int main()
{
	int num=5;
	
	for(char ch='A';ch<='E';ch++)
	{
		for(char kh='A';kh<=ch;kh++)  // i=1 ->j=1  , i=2 --> j=1,2 , i=3 --> j=1,2,3 , i=4 --> j=1,2,3,4 ,i=5 --> j=1,2,3,4,5
		{
		
		        printf(" ");
			printf("%c",kh);
			
		}
		
		printf("\n");
	}
}
