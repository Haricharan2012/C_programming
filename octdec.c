#include<stdio.h>
#include<math.h>
void main()
  {
    int octo,rem,quo,dec=0,count=0;
    printf("\n enter a octal number");
    scanf("%d",&octo);
    quo=octo;
    
    while(quo!=0)
      {
        rem=quo%10;
        quo=quo/10;
        count=count+1;
        dec=dec+rem*(int)pow(8,count-1);
        
        
        printf("\n the remainder is %d",rem);
        printf("\n the quotient is %d",quo);
        printf("\n the count=%d",count);
      }
      
      printf("\n the octal no was %d",octo);
      printf("\n the decimal number is %d",dec);
    }
        
