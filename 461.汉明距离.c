/*
 * @lc app=leetcode.cn id=461 lang=c
 *
 * [461] 汉明距离
 */

// @lc code=start


int hammingDistance(int x, int y){
    int z;
    int n = 0;

    z = x ^ y;
    while (z) {
        if (z % 2) {
            n++;
        }

        z /= 2;
    }

    return n;
}
// @lc code=end

