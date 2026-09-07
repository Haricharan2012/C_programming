#include<stdio.h>
void main()
  {
    int row,col;
     
     for(row=1;row<=5;row++)
        {
         for(col=1;col<=row;col++)
           {
             if((row==1) && (col==1))
               {
                 for(int i=1;i<5;i++)  //counter for no of times spaces shall repeat
                  {
                 printf(" ");
                  }
                  
                  
                 printf("*");
              }
             
             else if((row==2) && (col==1))
                {
                  for(int i=1;i<4;i++)
                     {
                      printf(" ");
                     }
                    printf("*");
                   
                 }
                 
            else if((row==3) && (col==1))
              {
                for(int i=1;i<3;i++)
                 {
                   printf(" ");
                 }
                printf("*");
              }
              
            else if((row==4) && (col==1))
              {
                for(int i=1;i<2;i++)
                  {
                   printf(" ");
                  }
                  printf("*");
                }
                   
             else
               {
                printf("*");
                }
              
                
                
              //printf("*");
             }
             printf("\n");
          }
       } 
