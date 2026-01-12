#include<stdio.h>
void main()
 {
   int row,col;
   
   printf("\n program to  print triangle with numbers");
   
   //logic
   
   for(row=1;row<=5;row++)
      {
      for(col=1;col<=row;col++)
        {
          printf("%d",col);
        }
        printf("\n");
       }
    }
