/*
 * @lc app=leetcode.cn id=234 lang=c
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#define MAX 100000
int map[MAX];
bool isPalindrome(struct ListNode* head){
    struct ListNode *tmp;
    int i;
    int num = 0;
    memset(map, 0, sizeof(int) * MAX);
    for (i = 0, tmp = head; tmp != NULL; tmp = tmp->next) {
        map[i] = tmp->val;
        num++;
        i++;
    }
    if (num == 1) {
        return true;
    }
    int begin, end;
    for (begin = 0, end = num - 1; begin < end; begin++, end--) {
        if (map[begin] != map[end]) {
            return false;
        }
    }
    return true;
}

// @lc code=end

