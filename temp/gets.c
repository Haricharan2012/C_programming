#include <stdio.h>
#include<string.h>
#define MAX_LIMIT 20
void main()
{
   char str[MAX_LIMIT];
   int lc,length;
   //enter a string
   fgets(str, MAX_LIMIT, stdin);
   
   //find length of a string 
   
   length=strlen(str);
   
   if(str[length-1]=='\n')
     {
       str[length-1]='\0';
       length--;
     }
   
   //loop through string to find an print first letter of eacgh word
   
   for(lc=0;lc<length;lc++)
     {
       if(lc==0||str[lc-1]==' ')
         {
           printf("%c",str[lc]);
         }
        printf("\n");
       }
   
   printf("the string is :%s", str);
}

