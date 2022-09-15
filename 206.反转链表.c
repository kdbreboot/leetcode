/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *rev_head;
    struct ListNode *temp;

    rev_head = (struct ListNode *)malloc(sizeof(struct ListNode));
    rev_head->next = NULL;
    rev_head->val = -1;

    while (head) {
        temp = head->next;
        head->next = rev_head->next;
        rev_head->next = head;
        head = temp;
    }

    return rev_head->next;
}


// @lc code=end

