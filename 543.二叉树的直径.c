/*
 * @lc app=leetcode.cn id=543 lang=c
 *
 * [543] 二叉树的直径
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


int ans;

int max (int a, int b) {
    return (a > b ? a : b);
}

int depth(struct TreeNode* rt){
    if (rt == NULL) {
        return 0;               // 访问到空节点了，返回0
    }
    int L = depth(rt->left);    // 左儿子为根的子树的深度
    int R = depth(rt->right);   // 右儿子为根的子树的深度
    ans = max(ans, L + R + 1);  // 计算d_node即L+R+1 并更新ans
    return max(L, R) + 1;       // 返回该节点为根的子树的深度
}

int diameterOfBinaryTree(struct TreeNode* root) {
    ans = 1;
    depth(root);
    return ans - 1;
}

// @lc code=end

