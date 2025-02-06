/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root , vector<TreeNode*> &ans)
    {
        if(root==NULL) return;
        ans.push_back(root);
        preorder(root->left,ans);
        preorder(root->right,ans); 

    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans;

        preorder(root,ans);

        int n = ans.size();       

        for(int i = 0 ; i < n-1 ;i++)
        {
            ans[i]->right = ans[i+1]; 
            ans[i]->left = NULL;
        }
    }
};
// @lc code=end

