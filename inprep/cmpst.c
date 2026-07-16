#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	char str2[10];
	
	printf("\n enter  a string");
	scanf("%s",str1);
	
	printf("\n enter another string");
	scanf("%s",str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("\n strings are equal");
	}
	else
	{
		printf("\n strings are different");
	}
}

	
	
