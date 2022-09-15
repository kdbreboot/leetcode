/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

// @lc code=start


int climbStairs(int n){
    int n1 = 1, n2 = 2, n3;
    int i;

    if (1 == n) {
        return n1;
    }

    if (2 == n) {
        return n2;
    }

    for (i = 3; i <= n; i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return n3;
}
// @lc code=end

