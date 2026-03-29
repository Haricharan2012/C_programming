#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char str[10];
	
	printf("\n enter a string");
	scanf("%s",str);
	
	int i;
	int decno=0;
	int count=0;
	int nx=0;
	for(i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]=='A')
		{
			 
			nx=10;
			//printf("%d",nx);
		}
		else if(str[i]=='B')
		{
			
			nx=11;
			//printf("%d",nx);
		}
		else if(str[i]=='C')
		{
			
			nx=12;
			//printf("%d",nx);
		}
		else if(str[i]=='D')
		{
			
			nx=13;
			//printf("%d",nx);
		}
		else if(str[i]=='E')
		{
			
			nx=14;
			//printf("%d",nx);
		}
		else if(str[i]=='F')
		{
			
			nx=15;
			//printf("%d",nx);
		}	
		else
		{
			//printf("%d",str[i]-0x30);
			 nx=str[i]-0x30;
			//printf("%d",nx);
			
		}
		
		decno=decno+nx*pow(16,count);
		count=count+1;
	}
		
		printf("%d",decno);

	}

