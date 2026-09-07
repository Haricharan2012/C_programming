#include<stdio.h>
void main()
  {
    int row,col;
    
    for(row=1;row<=10;row++)
      {
        for(col=1;col<=row;col++)
          {
            if(row%2!=0)
              {
               printf("*");
              }
             
            }
            printf("\n");
         }
         
        }
