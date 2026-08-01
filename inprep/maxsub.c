int maxSubArray(int* nums, int numsSize)
{
    int maxsum=nums[0];  //initialize maxsum to first element
    int currsum=0;      //init currsum to 0
 

    for(int i=0;i<numsSize;i++)
    {
        if(currsum>0)                 
        {
            currsum=currsum+nums[i];   //if currsum is positive then add on array ele
        }

        else
        {
            currsum=nums[i];   //if currsum is negaive then start fresh from current array val 
        }


        if(currsum>maxsum)
        {
            maxsum=currsum;  //if the sum value is greater than default value of max and if a larger sum is found
        }

    }
    return maxsum;

    
}
