/*
 * @lc app=leetcode id=701 lang=cpp
 *
 * [701] Insert into a Binary Search Tree
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(root==NULL) return new TreeNode(val);
        else if(root->val > val) // go left
        {
            if(root->left == NULL)
            {
                TreeNode* temp = new TreeNode(val); 
                root->left = temp;
            }

            else{
                insertIntoBST(root->left,val);
            }
        }

        else{ // go right
                if(root->right == NULL)
                {
                    TreeNode* temp = new TreeNode(val); 
                    root->right = temp;
                }

                else{
                    insertIntoBST(root->right,val);
                }
             }

        return root;
    }
};
// @lc code=end

