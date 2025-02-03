/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
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
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root->val == key){
            // Case 1 : No child in the tree 
            if(root->left == NULL and root->right == NULL) return NULL;

            // Case 2 : only 1 child in the tree 

            if(root->left == NULL or root->right == NULL)
            {
                if(root->left != NULL) return root->left;
                else return root->right; 
            }
        }
        else if(root->val>key){
            root->left = deleteNode(root->left,key); 
        }

        else{
            root->right = deleteNode(root->right,key); 
        } 

        return root;
    }
};
// @lc code=end

