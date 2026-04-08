#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	long int lon=0;
	
	printf("\n -----------String to long conversion program------------------");
	printf("\n enter a string: ");
	scanf("%s",str);
	
	int len=strlen(str);
	
	for(int i=0;i<len;i++)
	{
		lon=lon*10+(str[i]-'0');
	}
	
	printf("\n the long number is %ld",lon);
}	
