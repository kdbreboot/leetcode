/*
 * @lc app=leetcode.cn id=111 lang=c
 *
 * [111] 二叉树的最小深度
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


int minDepth(struct TreeNode* root){
    int left, right;

    if(NULL == root){
        return 0;
    }

    left = minDepth(root->left);
    right = minDepth(root->right);

    if(0 == left && 0 != right){
        return 1 + right;
    }
    if(0 != left && 0 == right){
        return 1 + left;
    }
    if(0 == left && 0 == right){
        return 1;
    }

    return 1 + (left > right ? right : left);
}
// @lc code=end

