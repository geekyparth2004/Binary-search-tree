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
        if (root == nullptr) 
            return new TreeNode(val);

        if (val < root->val) { // Go left
            root->left = insertIntoBST(root->left, val);
        } 
        else { // Go right
            root->right = insertIntoBST(root->right, val);
        }

        return root; // Ensure the updated tree is returned
    }

    TreeNode* bstFromPreorder(vector<int>& pre) {
        if (pre.empty()) return nullptr; // Handle empty input case

        TreeNode* root = new TreeNode(pre[0]); 

        for (int i = 1; i < pre.size(); i++) {
            root = insertIntoBST(root, pre[i]);
        }

        return root;
    }
};
