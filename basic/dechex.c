#include<stdio.h>

int main()
{
	int num=0;
	int rem=0;
	int res[10];
	
	printf("\n enter a decimal number");
	scanf("%d",&num);
	
	int tnum=num;
	int count=0;
	
	
	while(tnum!=0)
	{
		rem=tnum%16;
		tnum=tnum/16;
		res[count]=rem;
		count=count+1;
	}
	
	for(int i=count-1;i>=0;i--)
	{
	     /* if(res[i]==10)
		{
			char ch='A';
			printf("%c",ch);
		}
		else if(res[i]==11)
		{
			char ch='B';
			printf("%c",ch);
		}
		else if(res[i]==12)
		{
			char ch='C';
			printf("%c",ch);
		}
		else if(res[i]==13)
		{
			char ch='D';
			printf("%c",ch);
		}
		else if(res[i]==14)
		{
			char ch='E';
			printf("%c",ch);
		}
		else if(res[i]==15)
		{
			char ch='F';
			printf("%c",ch);
		} */
		
		if(res[i]>10)
		{
			printf("%c",res[i]+55); //ascii values for alpha
		}
		else
		{
			printf("%d",res[i]);
		}
	}
}
		
			
	
		
		
