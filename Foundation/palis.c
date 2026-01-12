#include<stdio.h>
#include<string.h>
void main()
  {
    int n=0;
    char str[n];
    printf("\n enter the size of the string");
    scanf("%d",&n);
    printf("\n enter the string");
    scanf("%s",str);
    char ori[n+1];
    strcpy(ori,str);
    int len;
    
    len=strlen(str);
    
    //logic
    
    for(int i=0;i<=len/2;i++)
       {
          int temp; 
          temp=str[i];  //first character to temp  
          str[i]=str[len-i-1];  //last character to first 
          str[len-i-1]=temp;  //first character to last
       }
       
   printf("\n the string is\n%s",str);
    printf("\n the string is\n%s",ori);
   
   
   
   if (strcmp(str,ori)==0)
    {
     printf("\n string is a palindrome");
   }
   else
     {
      printf("\n string is not a palindrome");
     }
     
  }
