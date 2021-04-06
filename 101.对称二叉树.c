/*
 * @lc app=leetcode.cn id=101 lang=c
 *
 * [101] 对称二叉树
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

bool isMirror(struct TreeNode* t1, struct TreeNode* t2){
    if(NULL == t1 && NULL == t2){
        return true;
    }
    if(NULL == t1 || NULL == t2){
        return false;
    }

    if(t1->val == t2->val){
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }

    return false;
}


bool isSymmetric(struct TreeNode* root){
    return isMirror(root, root);
}
// @lc code=end

