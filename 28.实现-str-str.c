/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start

#include <string.h>

int strStr(char * haystack, char * needle){
    int i, j;
    int lenHaystack, lenNeedle;

    //check
    if(NULL == haystack || NULL == needle){
        return 0;
    }

    lenHaystack = strlen(haystack);
    lenNeedle = strlen(needle);
    if(lenHaystack < lenNeedle){
        return -1;
    }

    for (i = 0; i < lenHaystack - lenNeedle + 1; i++){
        for (j = 0; j < lenNeedle; j++){
            if(haystack[i+j] != needle[j]){
                break;
            }
        }

        if(lenNeedle == j){
            break;
        }
    }

    if(lenNeedle == j){
        return i;
    }

    return -1;
}
// @lc code=end

