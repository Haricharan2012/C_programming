
/*************name**************************************
*************start date********************************
*************modified date*****************************
*************description*******************************/

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
  	int ct=0;
  
  	loop:
  	if (ct == numsSize) 
   	{
    		return 0; 
   	}
  
  	sum=0;
  	
  	for(int i = ct; i <numsSize; i++)
     	{
       		sum = sum + nums[i];         
       		printf("\n sum is %d",sum);
     	}
     	ct=ct+1;
     
      	if(sum>max)
       	{
        	max=sum;
       	}
      	printf("\n the max of the array is %d",max);      
     	goto loop;   
     	printf("\n the sum is %d",sum);
    
}

