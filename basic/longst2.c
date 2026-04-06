#include<stdio.h>
#include<string.h>

int main()

{
	long int lvar;
	int rem=0;
	int num=0;
	char str[20];
	int count=0;	
	
	printf("\n enter a value for long variable");
	scanf("%ld",&lvar);
	
	long int tempvar=lvar;
	
	while(tempvar!=0)
	{
		rem=tempvar%10;
		tempvar=tempvar/10;
		str[count]=rem + '0';
		count=count+1;
	}
	
	str[count]='\0';
	
	int rcount=count;
	char revst[20];
	
	for(int i=count-1,j=0;i>=0,j<=rcount;i--,j++)
	{
		revst[j]=str[i];
	}
	
	revst[rcount]='\0';
	
	printf("\n the string is %s",revst);
		
}
