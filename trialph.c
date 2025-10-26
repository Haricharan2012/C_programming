#include<stdio.h>
void main()
  {
    int row,col;
    printf("\n print triangle with alphabets");
    
    //logic
    
    for(row=1;row<=5;row++)
      {
        for(col=1;col<=row;col++)
          {
          
            if(col==1)
              {
               printf("A");
              }
            else if(col==2)
              {
                printf("B");
              }
            else if(col==3)
              {
                printf("C");
              }
            else if(col==4)
              {
                printf("D");
              }
            else
              {
               printf("E");
              }
        }
        printf("\n");
     }
  }
    
    
