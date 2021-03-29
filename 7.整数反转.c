/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start

#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

int reverse(int x){
    int n = 0, y = 0;

    while (0 != x)
    {
        n = x % 10;
        
        //check
        if(y > INT_MAX/10 || y < INT_MIN/10){
            return 0;
        }

        y = 10 * y + n;
        x /= 10;
    }
    

    return y;
}




// @lc code=end

