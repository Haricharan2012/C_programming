#include<stdio.h>
void main()
  {
    int range;
    int sum=0;
    printf("\n enter the range to calculate for");
    scanf("%d",&range);
    for(int temp=1;temp<=range;temp++)
       {
         sum=sum+temp;
       }
    printf("\n %d",sum);
  }
  
