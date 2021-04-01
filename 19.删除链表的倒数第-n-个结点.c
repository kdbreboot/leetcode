/*
 * @lc app=leetcode.cn id=19 lang=c
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *p = head, *q = head;
    struct ListNode *tmp;
    int i = 0;

    while(NULL != p){
        if(i <= n){
            p = p->next;
        }else{
            p = p->next;
            q = q->next;
        }

        i++;
    }

    if(n == i){
        p = head;
        head = head->next;
        free(p);
        return head;
    }

    tmp = q->next;
    q->next = q->next->next;
    free(tmp);

    return head;
}
// @lc code=end

