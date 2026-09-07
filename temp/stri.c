#include<stdio.h>
void main()
  {
    int row,spac,col,n=5;
    for(row=0;row<=n;row++)
       {
         for(spac=0;spac<2*(n-row-1);spac++)
            {
              printf(" ");
              
            }
         for(col=0;col<2*row+1;col++)
            {
             printf("*");
            }
         }
       }
            
         
