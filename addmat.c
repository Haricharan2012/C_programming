#include<stdio.h>
void main()
  {
    int mat1[5][5];
    int mat2[5][5];
    int res[5][5];
    int range;
   
    
    printf("\n enter the range of rows and cols");
    scanf("%d",&range);
    
    
    printf("\n enter data in 2d array");
    for(int row=0;row<range;row++)
        {
          for(int col=0;col<range;col++)
            {
              scanf("%d",&mat1[row][col]);
            }
          }
          
    printf("\n enter data of other mat");
      for(int row=0;row<range;row++)
        {
          for(int col=0;col<range;col++)
            {
              scanf("%d",&mat2[row][col]);
            }
          }
          
          
       //add
       
       printf("\n the result is\n");
       for(int row=0;row<range;row++)
        {
          for(int col=0;col<range;col++)
            {
            
            res[row][col]=mat1[row][col]+mat2[row][col];
            printf("%d\t",res[row][col]);
             // scanf("%d",&res[row][col]);
            }
            printf("\n");
          }
       }
