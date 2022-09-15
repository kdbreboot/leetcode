/*
 * @lc app=leetcode.cn id=226 lang=c
 *
 * [226] 翻转二叉树
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


struct TreeNode* invertTree(struct TreeNode* root){
    struct TreeNode *left;
    struct TreeNode *right;

    if (!root) {
        return NULL;
    }

    left = invertTree(root->left);
    right = invertTree(root->right);

    root->left = right;
    root->right = left;

    return root;
}
// @lc code=end

