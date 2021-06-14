/*
 * @lc app=leetcode.cn id=236 lang=c
 *
 * [236] 二叉树的最近公共祖先
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
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    struct TreeNode *left;
    struct TreeNode *right;

    if(!root || p == root || q == root){
        return root;
    }

    left = lowestCommonAncestor(root->left, p, q);
    right = lowestCommonAncestor(root->right, p, q);

    if(left && right){
        return root;
    }

    return (left ? left : right);
}
// @lc code=end

