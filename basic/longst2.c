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
	
	for(int i=count;i>0;i--)
	{
		
	
	printf("\n the string is %s",str);
	
}
