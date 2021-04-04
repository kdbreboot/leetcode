/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start


int singleNumber(int* nums, int numsSize){
    int ans, i;

    ans = nums[0];

    for (i = 1; i < numsSize; i++){
        ans ^= nums[i];
    }

    return ans;
}
// @lc code=end

