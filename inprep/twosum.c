/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int* result=malloc(2*(sizeof(int)));
    int val=0;
    for(int i=0;i<numsSize;i++)
      {
        
       for(int j=i+1;j<numsSize;j++)
         {
            val=nums[i]+nums[j];
            if(val==target)
              {
                 result[0]=i;
                 result[1]=j;
                *returnSize=2;
                return result;
              }

         }
      }
    *returnSize=0; //if no element add up
     return NULL;
}
