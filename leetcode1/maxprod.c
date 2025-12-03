#include<stdio.h>

int prodmax(int *nums,int numsSize);

int main(int argc,char *argv[])
{

	int nums[]={3,-1,4};
	int numsSize= sizeof(nums)/sizeof(nums[0]);
		prodmax(nums,numsSize);
	//printf("\n the product od the array is %d",result);
}

int prodmax(int* nums, int numsSize) 
{

	int maxprod=nums[0];
	int currprod=0;

    //applying kadane's algorithm
	for(int i=0;i<numsSize;i++)
	{
	        currprod=1;
	    	for(int j=i;j<numsSize;j++)
    		{
    		
    			currprod=currprod*nums[j];
    			
    			if(currprod > maxprod)
    			{
            			maxprod = currprod; 
            	        }
    		}
    		 
    	  }
    		
    		printf("\n the maximum product is %d",maxprod);
}
    		
    	        /*if(currprod==0)    //if prod is non negative
        {
            currprod=nums[i];  //currprod value updated
        }
        else
        {
            currprod=currprod*nums[i];   //currprod value reset to current 
        }

        if(currprod>maxprod)
        {
            maxprod=currprod;  //maxprod value updated if currprod is greater else remains default
        } */
  //  }

  //  return maxprod;
    
//}

