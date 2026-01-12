#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void main()
  {
    char strii[10];
    int ptr=0,ptr2=0;
    bool repeats;
    int count=0;
    
    printf("\n enter a string");
    scanf("%s",strii);
    printf("\n the string is %s",strii);
    
    int length=strlen(strii);
    printf("\n the length of the string is %d",length);
    
    
          for( ptr=0;ptr<=length;ptr++)
            {
               for(ptr2=ptr+1; ptr2<=length;ptr2++)
                 {
                   if(strii[ptr]==strii[ptr2])
                      {
                        repeats=true;
                        count=count+1;
                        printf("\n valuer of count is %d",count);
                       }
                    else
                       {
                         
                         repeats=false;
                         //if(count==0)
                          //`{
                          //printf("\n the non repeating character is %c",strii[ptr]);
                          //}
                          
                          // if(count>0)
                          //{
                          //printf("\n repeating character is %c",strii[ptr]);
                          //}
                      }
                      }
                      
                      if(count==0)
                          {
                          printf("\n the non repeating character is %c",strii[ptr]);
                          }
                          
               
            
                      ptr2=0;
                      
                      //ptr2=ptr+1;
                        count=0;  //reset counter to zero to check for repeatation of next characters in string 
                   }
                 
                   
                   printf("\n------------------ end of check---------------------------");
                  
                }
