/* Example: Two Sum Problem
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers that add up to target.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    *returnSize = 0;
    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* result = twoSum(nums, 4, target, &returnSize);
    
    if (returnSize == 2) {
        printf("Two Sum Example:\n");
        printf("Input: nums = [2, 7, 11, 15], target = %d\n", target);
        printf("Output: [%d, %d]\n", result[0], result[1]);
        printf("Explanation: nums[%d] + nums[%d] = %d + %d = %d\n",
               result[0], result[1], nums[result[0]], nums[result[1]], target);
    } else {
        printf("No solution found\n");
    }
    
    free(result);
    return 0;
}
