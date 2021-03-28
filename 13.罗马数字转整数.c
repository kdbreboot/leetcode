/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

// @lc code=start

typedef struct singleCharS
{
    char Char;
    int num;
}singleChar;

singleChar roman[] = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};


/* 0: fail
   x: success
   */
int isValidReverse(char *s, int cur){
    //check
    if(NULL == s || '\0' == s[cur] || '\0' == s[cur+1]){
        return 0;
    }

    //case保证是一个合法罗马序列
    if('I' == s[cur]){
        if('V' == s[cur+1]){
            return 4;
        }else if('X' == s[cur+1]){
            return 9;
        }
    }

    if('X' == s[cur]){
        if('L' == s[cur+1]){
            return 40;
        }else if('C' == s[cur+1]){
            return 90;
        }
    }

    if('C' == s[cur]){
        if('D' == s[cur+1]){
            return 400;
        }else if('M' == s[cur+1]){
            return 900;
        }
    }

    return 0;
}


int romanToInt(char * s){
    int sum = 0, value = 0;
    int cur = 0, move = 0;
    int i;

    while(s[cur]){
        move = 0;
        value = 0;

        if(value = isValidReverse(s, cur)){
            move = 2;
        }else{
            move = 1;
            for (i = 0; i < 7; i++){
                if(s[cur] == roman[i].Char){
                    value = roman[i].num;
                    break;
                }
            }
        }

        sum += value;
        cur += move;
    }

    return sum;
}
// @lc code=end

