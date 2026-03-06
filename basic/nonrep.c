#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void strchk(char *str);

int main()
{

	char str[10]="MAXIMUM";

	strchk(str);

}

void strchk(char *str)
{

	int len=strlen(str);
	
	for(int i=0;i<len;i++)  //outer loop to pick an element
	{
		bool found=false;
	
		
		for(int j=0;j<len;j++)  //inner loop to find another occurance of picked char
		{
			if((i!=j)&&(str[i]==str[j]))
			{
				found=true;
				break;
			}
		}
			
			if(!found)
			{
				printf("%c",str[i]);  //if no reccurance print that character
			}
			
	 }
}
	
	
