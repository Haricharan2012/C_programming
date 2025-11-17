#include<stdio.h>
int duplicate(int* nums,int numsize);

int main(int argc,char *argv[])
   {
     int nums[]={1,2,3,1};
     int numsize=sizeof(nums)/sizeof(nums[0]);
     duplicate(nums,numsize);
    }
    
int duplicate(int* nums,int numsize)
    {
    
      for(int i=0;i<numsize;i++)
          {
         //   for(int j=i+1;j<numsize;j++)
         //     {
              
                if(nums[i]==nums[i+1])
                  {
                    printf("\n exists for %d at %d",nums[i],i+1);
                  }
                else
                  {
                    printf("\n does not exist for %d",nums[i]);
                  }
               //}
           }
           
     }
                  
       
     
