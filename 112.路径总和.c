/*
 * @lc app=leetcode.cn id=112 lang=c
 *
 * [112] 路径总和
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


bool hasPathSum(struct TreeNode* root, int targetSum){
    if(NULL == root){
        return false;
    }

    if(NULL == root->left && NULL == root->right){
        if(targetSum == root->val){
            return true;
        }

        return false;
    }

    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}
// @lc code=end

