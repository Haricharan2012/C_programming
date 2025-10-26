#include<stdio.h>
void main()
  {
    int row,col;
    int n;
     
     for(row=1;row<=5;row++)
        {
         for(col=1;col<=row;col++)
           {
           
           
             if((row>=1) && (col==1))
               {
               
                 if(row==1)
                    {
                     n=5;
                    }
                 else if(row==2)
                    {
                     n=4;
                    }
                 else if(row==3)
                    {
                     n=3;
                    }
                 else if(row==4)
                   {
                     n=2;
                   }
                 else if(row==5)
                   {
                    n=0;
                   }
                   
                 for(int i=1;i<n;i++)  //counter for no of times spaces shall repeat
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
