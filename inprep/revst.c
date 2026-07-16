#include<stdio.h>

int main()
{
	int size;
	int len=0;
	//char str[20];
	
	//dynamic alloc
	
	char * str;
	str=(
	
	
	printf("\n enter a string");
	//scanf("%s",str);
	fgets(str,sizeof(str),stdin);
	
	while(str[len]!='\0')
	{
		len=len+1;
	}
	
	char dstr[len+1];
	
	
	for(int i=len-1,j=0;i>=0;i--,j++)
	{	
		
		dstr[j]=str[i];
	}
	dstr[len]='\0';  //after copying character we add null terminator to the string

	printf("\n the reversed string is %s",dstr);
}
	
	
