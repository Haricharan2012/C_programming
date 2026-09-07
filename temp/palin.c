#include<stdio.h>
void main()
  {
    int num,rem,rev=0,onum;
    printf("\n enter the number to be checked");
    scanf("%d",&onum);
    
    num=onum;
    
    //logic of program
    
    while(num>0)
     {
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
      }
      
     if(rev==onum)
       {
        printf("\n number is a palindrome");
       }
      else
        {
         printf("\n number is not a palindrome");
        }
    }
    
    
    
