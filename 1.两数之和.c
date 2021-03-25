/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *sum;
    int i, j;

    /* 参数检查 */

    sum = malloc(2* sizeof(int));
    *returnSize = 2;

    for (i = 0; i <= numsSize-2; i++){
        for (j = i + 1; j <= numsSize - 1; j++){
            if(target == nums[i] + nums[j]){
                sum[0] = i;
                sum[1] = j;
                return sum;
            }
        }
    }

    return NULL;
}
// @lc code=end

