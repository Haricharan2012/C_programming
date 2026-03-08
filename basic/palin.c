#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20]="";
	char rev[20]="";
	
	printf("\n enter a string");
	//scanf("%s",str1);  //only reads string until it encounters white_space
	fgets(str1,sizeof(str1),stdin);  //reads string even if it encounters whitespace (string,size,input stream)
	
	int len=strlen(str1);  //find length of str
    
    
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
