#include <stdlib.h>

// Comparator function used by qsort()
// Sorts intervals based on their starting value
int compare(const void *a, const void *b)   // qsort passes adresses of  pointers to a and b
{
    int *interval1 = *(int **)a;      // First interval   // Go to address 'a' and fetch the int* stored there.
    int *interval2 = *(int **)b;      // Second interval

    return interval1[0] - interval2[0];   // Compare starting points
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *returnColumnSizes must be malloced.
 */
int** merge(int** intervals,              // intervals is an array of int* each pointer points to one interval(array of pointers)
            int intervalsSize,
            int* intervalsColSize,
            int* returnSize,
            int** returnColumnSizes)
{

    // If no intervals are presen\
   
    if(intervalsSize == 0)
    {
        *returnSize = 0;
        return NULL;
    }

    // Sort intervals according to their starting value
    qsort(intervals, intervalsSize, sizeof(int *), compare);   //when qsort compares 2 elements it sends address of those elements not the elements 	

    // Allocate memory for answer
    // Worst case: none of the intervals overlap
    int **result = (int **)malloc(intervalsSize * sizeof(int *));   // pointer to a pointer to an interger 								

    // Allocate memory for every interval (2 integers each)
    for(int i = 0; i < intervalsSize; i++)
    {
        result[i] = (int *)malloc(2 * sizeof(int));
    }

    // Allocate memory for column sizes
    *returnColumnSizes = (int *)malloc(intervalsSize * sizeof(int));

    // Stores index of merged intervals in result
    int k = 0;

    // Assume first interval is the current interval
    int currentStart = intervals[0][0];
    int currentEnd   = intervals[0][1];

    // Traverse remaining intervals
    for(int i = 1; i < intervalsSize; i++)
    {
        // If intervals overlap
        if(intervals[i][0] <= currentEnd)
        {
            // Extend current interval if needed
            if(intervals[i][1] > currentEnd)
            {
                currentEnd = intervals[i][1];
            }
        }
        else
        {
            // Store merged interval
            result[k][0] = currentStart;
            result[k][1] = currentEnd;

            // Every interval has exactly 2 columns
            (*returnColumnSizes)[k] = 2;

            // Move to next position in result
            k++;

            // Start a new current interval
            currentStart = intervals[i][0];
            currentEnd   = intervals[i][1];
        }
    }

    // Store the final interval
    result[k][0] = currentStart;
    result[k][1] = currentEnd;

    (*returnColumnSizes)[k] = 2;

    // Total merged intervals
    *returnSize = k + 1;

    return result;
} 

