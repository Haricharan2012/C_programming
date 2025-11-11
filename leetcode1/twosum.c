#include<stdio.h>
int twosum(int *x,int y,int z);


int main(int argc,char *argv)
  {
    int nums[]= {3,3};
   
    int target=6;
     
    int numsize=sizeof(nums)/sizeof(nums[0]);
    
    printf("\n the size of the array is %d",numsize);
   
    twosum(nums,numsize,target);
   
      
  }
  
  
  
  int twosum(int *x,int y, int z)
     {
     
        int res=0;
     
        for(int i=0;i<y;i++)
          {
            for(int j=i+1;j<y;j++)
              {
                 res=x[i]+x[j];
                 
                 if(res==z)
                     {
                     
                      printf("\n indexes are [%d,%d]",i,j);
                    
                    }
               }
           }
       }
                   
  
  
