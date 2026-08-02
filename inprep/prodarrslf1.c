int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    // The output array will have the same size as the input array
    *returnSize = numsSize;

    // Allocate memory for the result array
    int *res = (int *)malloc(numsSize * sizeof(int));

    // -------------------------
    // Calculate Prefix Products
    // -------------------------

    // There are no elements before index 0,
    // so the prefix product is 1
    res[0] = 1;

    // Build the prefix product array
    // res[i] = product of all elements before index i
    for (int i = 1; i < numsSize; i++)
    {
        res[i] = res[i - 1] * nums[i - 1];
    }

    /*
        Example:

        nums = [1, 2, 3, 4]

        res initially becomes:

        Index : 0  1  2  3
        nums  : 1  2  3  4
        res   : 1  1  2  6

        Explanation:
        res[0] = 1
        res[1] = 1
        res[2] = 1 × 2 = 2
        res[3] = 1 × 2 × 3 = 6
    */

    // -------------------------
    // Calculate Suffix Products
    // -------------------------

    // Stores the product of elements after the current index
    int suffix = 1;

    // Traverse from right to left
    for (int i = numsSize - 1; i >= 0; i--)
    {
        // Multiply prefix product with current suffix product
        // This gives the product of all elements except nums[i]
        res[i] = res[i] * suffix;

        // Update suffix for the next iteration
        // (moving one position to the left)
        suffix = suffix * nums[i];
    }

    /*
        Continuing the previous example:

        nums = [1, 2, 3, 4]

        Initial res = [1, 1, 2, 6]

        suffix = 1

        i = 3
        res[3] = 6 × 1 = 6
        suffix = 1 × 4 = 4

        i = 2
        res[2] = 2 × 4 = 8
        suffix = 4 × 3 = 12

        i = 1
        res[1] = 1 × 12 = 12
        suffix = 12 × 2 = 24

        i = 0
        res[0] = 1 × 24 = 24
        suffix = 24 × 1 = 24

        Final Answer:

        [24, 12, 8, 6]
    */

    // Return the final result array
    return res;
\

