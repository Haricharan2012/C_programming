#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	
	printf("\n enter the string to check length");
	scanf("%s",str);
	
	int len=strlen(str);
	
	printf("\n the length of the string is %d",len);
}

