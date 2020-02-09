/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root, TreeNode* parent, TreeNode* grandParent){
        int currentVal = 0;
        if(root == NULL) return 0;
        if(grandParent != NULL && grandParent->val % 2 == 0){
            currentVal = root->val;
        }
        return dfs(root->left, root, parent) + currentVal + dfs(root->right, root, parent);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        return root == NULL ? 0 : dfs(root, NULL, NULL);
    }
};