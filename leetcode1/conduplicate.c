#include<stdio.h>
#include<stdlib.h>

int duplicate(int* nums,int numsize);

// Comparator to sort in ascending order
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int main(int argc,char *argv[])
   {
     int nums[]={1,1,1,3,3,4,3,2,4,2};
     int numsize=sizeof(nums)/sizeof(nums[0]);
     qsort(nums,numsize,sizeof(nums[0]),comp);
     
     for(int i=0;i<numsize;i++)
        {
         printf("\n %d",nums[i]);
        }
        
     duplicate(nums,numsize);
     
    }
    
int duplicate(int* nums,int numsize)
    {
    
     bool flag=false;
     
      for(int i=0;i<numsize;i++)
          {
         //   for(int j=i+1;j<numsize;j++)
         //     {
              
                if(nums[i]==nums[i+1])
                  {
                    printf("\n exists for %d at %d",nums[i],i+1);
                    
                    flag=true;
                  }
                  
                  if(flag)
                   {
                     return true;
                   }
                  else
                    {
                     return false;
                    }
               /* else
                  {
                    printf("\n does not exist for %d",nums[i]);
                  } */
               //}
           }
           
     }
                  
       
     
