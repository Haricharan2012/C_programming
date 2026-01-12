#include<stdio.h>
void main()
  {
    int arr[8],num;
    
    printf("\n program to find common array elements");
    printf("\n enter the number of elements in a array");
    
    scanf("%d",&num);
    
    printf("\n enter array elements");
    
      for(int i=0;i<num;i++)
         {
           scanf("%d",&arr[i]);
         }
         
    //display those array elements 
    
    
    printf("\n the array elements are");
      printf("\n");
       for(int i=0;i<num;i++)
         {
           printf("%d",arr[i]);
           printf("\n");
         }
         
     //logic for checking
     
     
    printf("\ncheck logic");
    
    for(int i=0;i<num;i++)
       {
         for(int j=0;j<i;j++)  //check only previous elements
           {
             if(arr[i]==arr[j])
               {
               
                //if(i!=j)
                 //{
                printf("\n matches at index %d and %d and the number is %d",i,j,arr[i]);
                // }
               }
            }
         }
        
   
         
    }
           
