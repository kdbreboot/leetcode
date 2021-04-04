/*
 * @lc app=leetcode.cn id=1137 lang=c
 *
 * [1137] 第 N 个泰波那契数
 */

// @lc code=start

int tribonacci(int n){
    int i ,tmp;
    int a, b, c;

    if(0 == n){
        return 0;
    }
    if(1 == n){
        return 1;
    }
    if(2 == n){
        return 1;
    }

    a = 0;
    b = 1;
    c = 1;
    for (i = 3; i <= n; i++){
        tmp = a + b + c;
        a = b;
        b = c;
        c = tmp;
    }

    return c;
}


// @lc code=end

