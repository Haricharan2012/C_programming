#include<stdio.h>
#include<math.h>

void main()
  {
    int num,rem,count=0,decno=0;
    
    printf("\n enter the octal number");
    scanf("%d",&num);
    int tnum=num;
    
   while(tnum!=0)
     {
        rem=tnum%10;
        tnum=tnum/10;
        count=count+1;
        
        decno=decno+rem*(int)pow(8,count-1);
      }
      
      printf("\n the converted decimal number is %d",decno);
      
   }
