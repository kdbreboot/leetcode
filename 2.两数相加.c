/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l3 = NULL;
    struct ListNode *p = NULL;
    struct ListNode *cur = NULL;
    struct ListNode *tmp = NULL;
    int sum = 0, up = 0;

    while(l1 && l2){
        //计算
        sum = l1->val + l2->val + up;
        up = sum / 10;
        sum %= 10;

        //申请空间，插入
        p = malloc(sizeof(struct ListNode));
        p->val = sum;
        p->next = NULL;

        if(NULL == l3 && NULL == cur){
            l3 = p;
            cur = p;
        }else{
            cur->next = p;
            cur = p;
        }

        l1 = l1->next;
        l2 = l2->next;
    }

    if(!l1 && !l2 && 0 == up){
        //同时结束， 且进位为0
        if(0 == up){
            return l3;
        }else{
            p = malloc(sizeof(struct ListNode));
            p->val = up;
            p->next = NULL;
            cur->next = p;
        }

        return l3;
    }

    //两个链表不一样长
    if(l1){
        tmp = l1;
    }else{
        tmp = l2;
    }

    while(tmp){
        sum = tmp->val + up;
        up = sum / 10;
        sum %= 10;

        p = malloc(sizeof(struct ListNode));
        p->val = sum;
        p->next = NULL;

        cur->next = p;
        cur = p;

        tmp = tmp->next;
    }

    //处理最后一个进位
    if(0 != up){
        p = malloc(sizeof(struct ListNode));
        p->val = up;
        p->next = NULL;
        cur->next = p;
    }

    return l3;
}

/*
    应该可以改成一个循环
    while(!l1 || !l2){
        sum
        up
        sum = ;

        malloc
        insert

        next;
    }

    处理最后一个进位
*/

// @lc code=end

