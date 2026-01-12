
/*************name**************************************
*************start date********************************
*************modified date*****************************
*************description*******************************/

#include<stdio.h>
int maxSubArray(int* nums,int numsSize);

int main(int argc,char * argv[])
{    
	int nums[]={-1};
	int numsSize=sizeof(nums)/sizeof(nums[0]);
   
	int maxx=maxSubArray(nums,numsSize);
	
	printf("\n the max is %d",maxx);
}

int maxSubArray(int* nums,int numsSize)
{
  
	int sum=0;
  	int max=nums[0];
  	int ct=0;
  
  	loop:
  	if (ct == numsSize) 
   	{
    		return max; 
    		
   	}
  
  	sum=0;
  	
  	for(int i = ct; i <numsSize; i++)
     	{
       		sum = sum + nums[i];         
       		//printf("\n sum is %d",sum);
       		if(sum>max)
       		{
        		max=sum;
       		}
     	}
     	ct=ct+1;
     
      
      	//printf("\n the max of the array is %d",max);      
     	goto loop;   
     	printf("\n the sum is %d",sum);
    
}

