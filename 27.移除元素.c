/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start

//当前区间，实际区间

int removeElement(int* nums, int numsSize, int val){
    int end = numsSize;
    int i = 0, j = 0;

    while(i < end){
        if(val == nums[i]){
            //copy
            for (j = i; j < end -1; j++){
                nums[j] = nums[j + 1];
            }

            end--;
        }else{
            i++;
        }
    }

    return end;
}
// @lc code=end

