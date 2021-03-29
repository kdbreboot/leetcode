/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start

//公共前缀，是所有字符串的子集、前缀交集
char * longestCommonPrefix(char ** strs, int strsSize){
    char *maxStr = NULL;
    int maxNum = 0;
    int loop, i;
    char *str;

    //check
    if(NULL == strs || 0 == strsSize){
        return "";
    }

    //以第一个字符串为基准
    //数组下标从0开始
    //strlen 不统计最后的'\0'
    maxStr = strs[0];
    maxNum = strlen(strs[0]);

    for (loop = 1; loop < strsSize; loop++){
        str = strs[loop];
        for (i = 0; i < maxNum; i++){
            if(('\0' == str[i]) || (maxStr[i] != str[i])){
                maxNum = i;
                break;
            }
        }

        if( 0 == maxNum){
            return "";
        }
    }

    str = malloc((maxNum + 1) * sizeof(char));
    strncpy(str, maxStr, maxNum);
    str[maxNum] = '\0';
    return str;
}
// @lc code=end

