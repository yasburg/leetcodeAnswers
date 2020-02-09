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
    
    void travelsal(TreeNode* root, int& total){
        if(root != NULL){
            travelsal(root->right, total);
            root->val += total;
            total = root->val;
            travelsal(root->left, total);
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        int total = 0;
        travelsal(root, total);
        return root;
    }
};