/*
 * @lc app=leetcode.cn id=338 lang=c
 *
 * [338] 比特位计数
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int countOnes(int x) {
    int ones = 0;
    while (x > 0) {
        x &= (x - 1);
        ones++;
    }
    return ones;
}

int* countBits(int n, int* returnSize) {
    int* bits = malloc(sizeof(int) * (n + 1));
    *returnSize = n + 1;
    for (int i = 0; i <= n; i++) {
        bits[i] = countOnes(i);
    }
    return bits;
}

// @lc code=end

