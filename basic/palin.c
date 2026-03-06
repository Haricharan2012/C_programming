#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10]="broom";
	char rev[10]="";
	
	int len=strlen(str1);
    
    
        printf("len is %d",len);
	
	//strrev(str1);
	
	//for(int i=len,j=0;i>0 && j<=len;i--,j++)
	for(int i=len-1,j=0;i>=0 && j<=len ;i--,j++)
	{
	
		rev[j]=str1[i];
		char ch=str1[i];
			
		printf("\n the revd string is %s",rev);
		printf("\ncurrent %c",ch);
		
	}
	
	printf("\n the rev string is %s",rev);
        printf("\n the original string is %s",str1);
        
       
	
	if(strcmp(str1,rev)==0)  //strcmp works --> equal =0 , first string smaller =<0 ,second string smaler  >0
	{
	printf("\n string is a palindrome");
	}
	else
	{
	printf("\n string is not a palindrome");
	} 
}
