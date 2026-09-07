#include<stdio.h>
void main()
  {
  
    int row,col;
    int n=5;
    int x=10;
    printf("\n program to print full pyramid");
    printf("\n");
    
    
    for(row=1;row<=5;row++)
       {
         for(col=1;col<=n-row;col++)  //1-5,2-5,3-5,4-5,5-5
           {
             printf(" ");
             
           }
           
           
        for(col=1;col<=row+4;col++)  //1 star,2 star 
          {
          
              if(row==1 && (col==2 || col==3||col==4 ||col==5))
                {
                  printf(" ");
                }
                
               else if(row==2 && (col==4 ||col==5 ||col==6))
                {
                  printf(" ");
                }
                
                 else if(row==3 && (col==6||col==7))
                {
                  printf(" ");
                }
               
               
                else if(row==4 && (col==8||col==9))
                {
                  printf(" ");
                }
               
              
                
              
 
           else
             {
             
            printf("*");
            
            }
          }
      
          printf("\n");
       
            
         }
       
       
    }
             
