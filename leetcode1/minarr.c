#include<stdio.h>
int findmin(int *nums,int numsSize);

int main(int argc,char *argv[])
{

	int nums[]={3,4,5,1,2};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	int result=findmin(nums,numsSize);
	printf("\n the min ele in rotated array is %d",result);
}


int findmin(int *nums,int numsSize)
{
	int min=nums[0];
	
	for(int i=1;i<numsSize;i++)
	{
	
		int ele=nums[i];
		
		if(ele<min)
		{
			min=ele;
		}
	}
	return min;
}
	
