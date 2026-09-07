#include<stdio.h>
void main()
  {
    int arr[5][5];
    int range;
   
    
    printf("\n enter the range of rows and cols");
    scanf("%d",&range);
    
    
    printf("\n enter data in 2d array");
    for(int row=0;row<range;row++)
        {
          for(int col=0;col<range;col++)
            {
              scanf("%d",&arr[row][col]);
            }
          }
    //printing
    
     for(int row=0;row<range;row++)
        {
          for(int col=0;col<range;col++)
            {
              printf("%d\t",arr[row][col]);
            }
           printf("\n");
          }
          
       }
        
    
    
          
