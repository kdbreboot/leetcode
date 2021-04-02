/*
 * @lc app=leetcode.cn id=155 lang=c
 *
 * [155] 最小栈
 */

// @lc code=start

typedef struct NodeS{
    int val;
    //当前栈内最小值
    int min;
    struct Node *next;
} Node;

typedef struct MinStackS{
    Node *head;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack *obj = malloc(sizeof(MinStack));
    obj->head = NULL;
    return obj;
}

void minStackPush(MinStack* obj, int val) {
    Node *tmp = NULL;

    if(NULL == obj->head){
        obj->head = malloc(sizeof(Node));
        obj->head->val = val;
        obj->head->min = val;
        obj->head->next = NULL;
    }else{
        tmp = malloc(sizeof(Node));
        tmp->val = val;
        if(obj->head->min > val){
            tmp->min = val;
        }else{
            tmp->min = obj->head->min;
        }

        tmp->next = obj->head;
        obj->head = tmp;
    }

    return;
}

void minStackPop(MinStack* obj) {
    Node *tmp = NULL;

    if(NULL == obj->head){
        return;
    }

    tmp = obj->head;
    obj->head = tmp->next;
    free(tmp);

    return;
}

int minStackTop(MinStack* obj) {
    return obj->head->val;
}

int minStackGetMin(MinStack* obj) {
    return obj->head->min;
}

void minStackFree(MinStack* obj) {
    Node *tmp = NULL;

    while(obj->head){
        tmp = obj->head;
        obj->head = tmp->next;
        free(tmp);
    }

    return;
}


/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
// @lc code=end

