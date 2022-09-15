/*
 * @lc app=leetcode.cn id=141 lang=c
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow;
    struct ListNode *fast;

    if (NULL == head || NULL == head->next) {
        return false;
    }

    slow = head;
    fast = head->next;

    while (slow != fast) {
        if (NULL == fast || NULL == fast->next) {
            return false;
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return true;
}
// @lc code=end

