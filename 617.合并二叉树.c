/*
 * @lc app=leetcode.cn id=617 lang=c
 *
 * [617] 合并二叉树
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


struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if (t1 == NULL) {
        return t2;
    }
    if (t2 == NULL) {
        return t1;
    }
    struct TreeNode* merged = malloc(sizeof(struct TreeNode));
    merged->val = t1->val + t2->val;
    merged->left = mergeTrees(t1->left, t2->left);
    merged->right = mergeTrees(t1->right, t2->right);
    return merged;
}

// @lc code=end

