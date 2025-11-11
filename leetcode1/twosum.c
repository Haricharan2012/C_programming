#include<stdio.h>
int twosum(int x,int y,int z);


int main(int argc,char *argv)
  {
    int nums[]= {2,7,11,15};
   
    int target=9;
     
    int numsize=sizeof(nums)/sizeof(nums[0]);
    
    printf("\n the size of the array is %d",numsize);
   
    twosum(nums,numsize,target);
   
      
  }
  
  
  
  int twosum(int x,int y, int z)
     {
     
    
  
  
