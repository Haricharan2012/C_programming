#include<stdio.h>
#include<stdlib.h>
int* productexc(int* nums,int size,int* retsize);

int main(int argc,char *argv[])
   {
   
     int nums[]={1,2,3,4};
     int size=sizeof(nums)/sizeof(nums[0]);
     int retsize=size;
     
      int* result = productexc(nums, size, &retsize);

   // printf("\nReturned array:\n");
    for (int i = 0; i < retsize; i++) {
        printf("%d ", result[i]);
    }

    free(result);  // free allocated memory
    return 0;
   }
   
   
   
 int* productexc(int* nums,int size,int* retsize)
    {
    
     int prod;
    
     int* answer = malloc(size * sizeof(int));  //dynamic size allocation

      for(int i=0;i<size;i++)
         {
           prod=1;  //auto reset after increment (after first loop)
           
          for(int j=0;j<size;j++)
            {
             
              if(i!=j)     //checks if the elemnts are not the same 
                 {
                  prod=prod*nums[j];   //if elements are ot the same go ahead and execute this product
                 }
                 
            }
            
            answer[i]=prod;    //add prod value to corresponding index
            
           // printf("\n the product array is %d",answer[i]);
            
           }  
           
          *retsize =size;
          return answer;
     }
             
                
        
