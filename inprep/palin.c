#include<stdio.h>

int main()
{
	int len=0;
	char str[15];
	
	printf("\n enter the string ");
	scanf("%s",str);
	
	//calculate length of entered string
	
	while(str[len]!='\0')
	{
		len=len+1;
	}
	
	
	//declare  new string to store rev of original
	
	char dstr[len+1];
	
	
	//reverse string by traversing original string in reverse
	
	for(int i=len-1,j=0;i>=0;i--,j++)
	{
		dstr[j]=str[i];
	}
	
	dstr[len]='\0'; // add null character to the end
	
	printf("\n the reversed string is %s",dstr);
	
	
	//check if the string is a palindrome
	int flag =1;
	
	for(int i=0;i<len;i++)
	{
		
		if(str[i]!=dstr[i])

		{
			flag=0;
			break;
		}
	}
	
	if(flag)
	{
		printf("\n string is a palindrome");
	}
	else
	{
		printf("\n string is not a palindrome");
	}
}
	

	
	
