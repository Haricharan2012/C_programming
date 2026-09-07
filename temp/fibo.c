#include<stdio.h>
void main()
  {
     int first,second,third;
     int range;
     printf("\n program to print fibonacci numbers");
     
     first=0;
     second=1;
     
     printf("\n enter the range until fibonacci must be generated");
     scanf("%d",&range);
     
     printf("\n %d",first);
     printf("\n %d",second);
     
     
     third=first+second;
     while(third<=range)
     
        {
        
         third=first+second;
         first=second;
         second=third;
         printf("\n %d",third);
         }
    }
        
     
