/*
 * @lc app=leetcode.cn id=61 lang=c
 *
 * [61] 旋转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
    int size = 0, rotate = 0;
    int n = 0, i = 0;
    struct ListNode *p = head;
    struct ListNode *tail = head;

    if(!head){
        return NULL;
    }

    while(p){
        size++;
        tail = p;
        p = p->next;
    }

    rotate = k % size;
    if(0 == rotate){
        return head;
    }

    n = size - rotate;
    p = head;
    while(p){
        if(i < n-1){
            i++;
            p = p->next;
        }else{
            break;
        }
    }

    tail->next = head;
    head = p->next;
    p->next = NULL;

    return head;
}
// @lc code=end

