#include<stdio.h>
void main()
  {
    int num,div;
    
    printf("\n enter a number to find all factors of");
    scanf("%d",&num);
    
    for(div=1;div<=num;div++)
      {
        if(num%div==0)
          {
            printf("\n the factors are %d",div);
            printf("\n");
          }
         
       }
  }
