
#include<stdio.h>
void main()
  {
    int decno,quo,rem;
    int count=0;
    int arr[15];
    
    printf("\n enter a number");
    scanf("%d",&decno);
    int loopno=decno;
    
    while(loopno>=1)
      {
      
        rem=loopno%2;
        loopno=loopno/2;
        
        printf("\n the quotient is %d",loopno);
        printf("\n the remainder is %d",rem);
        count=count+1;
        arr[count-1]=rem;
        printf("\n the count is %d",count);
        printf("\n");
        printf("------------------------------------");
        printf("\n");
        
        
       }
           
           
        //printing array 
        
        for (int i=count;i>=0;i--)
          {
          printf("%d",arr[i]);
           }
      }
      
   

   
   
    
