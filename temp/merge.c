#include<stdio.h>
void main()
  {
    int arr[10],arb[10],merge[20];
    printf("\n enter the array elements of first array");
      for(int i=0;i<10;i++)
         {
           scanf("%d",&arr[i]);
         }
     printf("\n enter the array elements of second array");
       for(int i=0;i<10;i++)
          {
            scanf("%d",&arb[i]);
          }
      
       for(int i=0;i<10;i++)
         {
          merge[i]=arr[i];
         }
         
       for(int i=0;i<10;i++)
         {
          merge[i+10]=arb[i];
         }
         
     
     printf("\n the merged array is");
        for(int i=0;i<20;i++)
           {
            printf("%d",merge[i]);
           }
  }
