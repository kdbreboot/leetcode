/*
 * @lc app=leetcode.cn id=94 lang=c
 *
 * [94] 二叉树的中序遍历
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


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inoder (struct TreeNode* root, int* res, int* returnSize) {
    if (!root) {
        return;
    }

    inoder(root->left, res, returnSize);
    res[(*returnSize)++] = root->val;
    inoder(root->right, res, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int *res = malloc(sizeof(int) * 101);
    *returnSize = 0;

    inoder(root, res, returnSize);
    return res;
}
// @lc code=end

