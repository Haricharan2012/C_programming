#include<stdio.h>
void main()
  {
    int og, rem,sq,num,sum=0;
    
    printf("\n enter a number");
    scanf("%d",&num);
    
    
    sq=num*num;
    og=sq;
    
    
    while(sq!=0)
      {
        rem=sq%10;
        sq=sq/10;
        sum=sum+rem;
      }
      
      if(sum==num)
        {
          printf("\n the number %d is a neon number",num);
        }
        
      else
         {
           printf("\n the number %d is not a neon number",num);
         }
  }
