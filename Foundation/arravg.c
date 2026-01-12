#include<stdio.h>

void main()
  {
  
    int range,arr[10];
    printf("\n program to calculate average of array");
    
    //input
    
    printf("\n enter the range of array");
    scanf("%d",&range);
    
    printf("\n enter the array elements");
    
      for(int i=0;i<=range;i++)
         {
           scanf("%d",&arr[i]);
          }
          
          
    //logic
    
    //add
    int sum=0,avg;
    for(int i=0;i<=range;i++)
       {
         sum=sum+arr[i];
       }
       
     printf("\n sum of array elements are %d",sum);
     
     avg=sum/range;
     
     printf("\n average of all elements is %d",avg);
     
   }
         
          
     
    
