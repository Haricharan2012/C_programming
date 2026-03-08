#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20]="";
	
	printf("\n enter a string");
	scanf("%s",str1);
	int count=0;
	
	for(int i=0;str1[i]!='\0';i++)
	{
		char ch=str1[i];
		printf("\n current ch is %c",ch);
		count=count+1;
	}
	
	printf("\n the length of the string is %d",count);
}
		
