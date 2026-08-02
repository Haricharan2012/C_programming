int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    // Output array size is the same as the input array size
    *returnSize = numsSize;

    // Allocate memory for the result array
    int *res = (int *)malloc(numsSize * sizeof(int));

    // -------------------------
    // Calculate Prefix Products
    // -------------------------

    // There are no elements before index 0,
    // so its prefix product is 1
    res[0] = 1;

    // Store the product of all elements before the current index
    for (int i = 1; i < numsSize; i++)
    {
        res[i] = res[i - 1] * nums[i - 1];
    }

    // -------------------------
    // Calculate Suffix Products
    // -------------------------

    // Initially, there are no elements after the last index,
    // so the suffix product is 1
    int suffix = 1;

    // Traverse the array from right to left
    for (int i = numsSize - 1; i >= 0; i--)
    {
        // Multiply the prefix product with the suffix product
        // to get the product of all elements except nums[i]
        res[i] = res[i] * suffix;

        // Update the suffix product for the next iteration
        suffix = suffix * nums[i];
    }

    // Return the result array
    return res;
}

