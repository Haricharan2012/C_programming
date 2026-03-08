#include<stdio.h>
#include<string.h>
#include<ctype.h>  //for toupper()

int main()
{
	char str1[10]="";
	char str2[10]="";
	
	printf("\n enter a string ");
	fgets(str1,sizeof(str1),stdin);
	
	int len =strlen(str1);
	
     //-----convert to uppercase-----//
	for(int i=0;i<len;i++)
	{
		str2[i]=toupper(str1[i]);
	}
	
	printf("\n str2 is %s",str2);
    //--------------------------------//
	
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
		
			int temp;
			if(str2[i]>str2[j])
			{
				temp=str2[i];
				str2[i]=str2[j];
				str2[j]=temp;
			}
			//printf("\n the sorted string is %s",str1);
		}
		printf("\n the sorted string is %s",str2);
	}
}
		
	
