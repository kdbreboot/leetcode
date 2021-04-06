/*
 * @lc app=leetcode.cn id=104 lang=c
 *
 * [104] 二叉树的最大深度
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


int maxDepth(struct TreeNode* root){
    int left, right;

    if(NULL == root){
        return 0;
    }

    left = maxDepth(root->left);
    right = maxDepth(root->right);

    return 1 + (left > right ? left : right);
}
// @lc code=end

