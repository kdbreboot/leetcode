/*
 * @lc app=leetcode.cn id=100 lang=c
 *
 * [100] 相同的树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q){
        return true;
    }

    if(!p ||!q){
        return false;
    }

    if(p->val == q->val){
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    return false;
}
// @lc code=end

