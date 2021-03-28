/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
#define INT_MAX 2147483647

bool isPalindrome(int x){
    int y = 0, n = 0, z = 0;

    if(x < 0){
        return false;
    }

    z = x;
    while(0 != z){
        n = z % 10;

        //check
        if(INT_MAX / 10 < y){
            return false;
        }

        y = 10 * y + n;
        z /= 10;
    }

    if(y == x){
        return true;
    }

    return false;
}
// @lc code=end

