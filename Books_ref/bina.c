#include<stdio.h>
#include<math.h>
void main()
   {
      int num,rem,count=0;
      printf("\n enter a binary number");
      scanf("%d",&num);
      
      int decno=0;
      
      while(num!=0)
         {
           rem=num%10;
           num=num/10;
           count=count+1;
           
           decno=decno+rem*(int)pow(2,count-1);
          }
         printf("the decimal no is: %d",decno);
       }
