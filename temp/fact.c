#include<stdio.h>
void main()
  {
   int num,fact=1;
   printf("\n enter a number");
   scanf("%d",&num);
   while(num>1)    //5!=0 4!=0 3!=0
     {
       fact=fact*num*num-1;  //1*5*4  20*4*3   
       num=num-2;   //num=4   num=3  num=2
       }
      printf("\n the result=%d",fact);
   }
