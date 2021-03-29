/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start


int removeDuplicates(int* nums, int numsSize){
    int begin = 0, end = 0;
    int cur = 0;

    //check
    if(NULL == nums || 0 == numsSize){
        return 0;
    }

    while(end < numsSize){
        if(nums[begin] == nums[end]){
            end++;
        }else{
            nums[cur] = nums[begin];
            cur++;
            begin = end;
        }
    }

    //最后一个
    nums[cur] = nums[begin];

    return cur + 1;
}
// @lc code=end

