#include<stdio.h>
int maxSubArray(int* nums,int numsSize);

int main(int argc,char * argv[])
 {
    
   int nums[]={-2,1,-3,4,-1,2,1,-5,4};
   int numsSize=sizeof(nums)/sizeof(nums[0]);
   
   maxSubArray(nums,numsSize);

 }



int maxSubArray(int* nums,int numsSize)
  {
  
  int sum=0;
  int max=0;
  
  for(int i=0;i<numsSize;i++)
     {
       sum=sum+nums[i];         
    
     }
     
     printf("\n the sum is %d",sum);
   
     if(sum>max)
       {
        max=sum;
       }
      printf("\n the max of the array is %d",max);
 
   }

