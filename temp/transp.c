#include<stdio.h>
void main()
  
  {
  
    int rr,cc;
    
    printf("\n enter the order of matrix");
    printf("\n enter te no of rows");
    scanf("%d",&rr);
    printf("\n enter te no of cols");
    scanf("%d",&cc);
    
    
    int mat[rr][cc];
    
    printf("\n enter te mat elements");
    for(int row=0;row<rr;row++)
      
      {
        for (int col=0;col<cc;col++)
         
         {
           scanf("%d",&mat[row][col]);
           }
           }
           
      
          printf("\n mat ele asre as follow ts");
    for(int row=0;row<rr;row++)
      
      {
        for (int col=0;col<cc;col++)
         
         {
           printf("\n%d",mat[row][col]);
           }
           printf("\n");
           }
           
           
           //trns
           
           
           printf("\n transpose of matrix is ");
           
              
    for(int row=0;row<rr;row++)
      
      {
        for (int col=0;col<cc;col++)
         
         {
           printf("%d",mat[col][row]);
           }
           printf("\n");
           }
      
      }
      
      
      

