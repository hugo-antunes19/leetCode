/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int x;
    int* resultArray = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for ( int i = 0; i < numsSize; i++ ){
        x = target - nums[i];
        for ( int j = i + 1; j < numsSize; j++ ){
            if ( nums[j] == x ){
                resultArray[0] = i;
                resultArray[1] = j;
                return resultArray;
            }
        }
    }
    return resultArray;
}