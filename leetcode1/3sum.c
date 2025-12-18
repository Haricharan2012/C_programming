#include<stdio.h>
int** threeSum(int* nums,int numsSize);

int main(int argc,char* argv[])
{

	int nums[]={-1,0,1,2,-1,-4};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
	threeSum(nums,numsSize);
}

int** threeSum(int* nums,int numsSize)
{
	for(int i=0;i<numsSize;i++)
	{
		for(int j=i;j<numsSize;j++)
		{
			for(int k=j;k<numsSize;k++)
			{
				if(i!=j && i!=k && j!=k)
				{
					if(nums[i]+nums[j]+nums[k]==0)
					  {
					        printf("\n");
					  	printf("%d%d%d",nums[i],nums[j],nums[k]);
					  }
			        }
		        }
	        }
       }
}
