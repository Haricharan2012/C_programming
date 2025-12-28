int** threesum(int* nums,int numsSize,int* returnSize,int** returnColumnSizes)

{

	int capacity=100; //max capacity of triplets (sets upper limit of how many triplets we can store)
	int** result=(int**)malloc(capacity * sizeof(int*)); //allocates memory for capacity number of rows
	*returnColumnSizes=(int**)malloc(capacity * sizeof(int)); //allocates memory to store column size for each row
	*returnsize=0; //initialize returnsize //variable updated everytime we find a valid triplet
	
	for(int i=0;i<numsSize;i++)
	{
		for(int j=i+1;j<numsSize;j++)
		{
			for(int k=j+1;k<numsSize;k++)
			{
				if(nums[i]+nums[j]+nums[k]==0)
				{
					result[*returnSize]=(int*)malloc(3 * sizeof(int));  //creates space for 3 integers,returnsize is current row index
					result[*returnSize][0]=nums[i];  //stores numbers into 2d array, each row is one valid triplet 
					result[*returnSize][1]=nums[j];
					result[*returnSize][2]=nums[k];
					
					(*returnColumnSizes)[*returnSize]=3;  //tells the caller that this row has three elements
					(*returnSize)++;  //moves to next row for next valid triplet
				}
			}
		}
	}
	return result;
}
					
					
//0(n2) version (corrected version)	
		
	#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);

    int capacity = 1000;
    int** result = (int**)malloc(capacity * sizeof(int*));
    *returnColumnSizes = (int*)malloc(capacity * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize - 2; i++) {

        // skip duplicate i
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result[*returnSize] = (int*)malloc(3 * sizeof(int));
                result[*returnSize][0] = nums[i];
                result[*returnSize][1] = nums[left];
                result[*returnSize][2] = nums[right];

                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                // skip duplicates
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return result;
}

