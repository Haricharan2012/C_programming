#include<stdio.h>
#include<string.h>
int main()
{
	double num;
	char str[30];
	int rem=0;
	int count=0;
	
	printf("\n enter a number to convert ");
	scanf("%lf",&num);
	
	int intpart=(int)num;
	double frac=num-intpart;
	
	//convert intpart to string
	
	int tempin=intpart;
	
	while(tempin!=0)
	{
		rem=tempin%10;
		tempin=tempin/10;
		str[count]=rem+'0';
		count=count+1;
	}
	
	//reverse the string in correct order
	
	count=0;
	char rev[30];
	
	for(int j=strlen(str)-1;j>=0;j--)
	{
		rev[count]=str[j];
		count=count+1;
	}
	
	printf("\n the intpart of no in string is\n %s",rev);
	
}
