#include<stdio.h>

int main()
{
	double num;
	char str[30];
	int rem=0.0;
	
	printf("\n enter a number to convert: ");
	scanf("%lf",&num);
	
	double tmp=num;
	int count=0;
	
	while(tmp!=0.0)
	{
		rem=tmp%10;
		tmp=tmp/10;
		str[count]=rem+'\0';
		count=count+1;
	}
	
	str[count] = '\0';
	
	printf("\n the current string is %s",str);
}
