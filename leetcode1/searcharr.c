#include<stdio.h>

int search(int* nums,int numsSize, int target);

int main(int argc,char *argv[])
{

 	int nums[]={4,5,6,7,0,1,2};
 	int target=0;
 	int numsSize=sizeof(nums)/sizeof(nums[0]);
 	int result=search(nums,numsSize,target);
        printf("\n the index of the element found is %d",result);
}

int search(int* nums,int numsSize,int target)
{
	int low=0;
	int high=numsSize-1;
	
	while(low<high)
	{
         	int mid=low+(high-low)/2;
                
                if(target==nums[mid])
                {
                	return mid;
                }
                
                if(target>nums[mid])
                {
                	low=mid+1;
                }
                
                else
                {
               		high=mid-1;
               	}
        }
      return -1;
  }
	

