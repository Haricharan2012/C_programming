#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
	char data;
	char ndata;
	
	printf("\n enter a character to convert");
	scanf("%c",&data);
	
	ndata = toupper(data);
	
	if(data >='0' && data <='9')
	{
		printf("\n the entered data is a number %d",data-'0');
	}
	
	else if(ndata >='A' && ndata <='Z')
	{
	
		printf("\n the connverted integer is: %d",ndata-55);
	
	}
	
	else
	{
		printf("\n the entered data is invalid");
	}
	
}
