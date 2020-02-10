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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* current = root;
        
        while(true){
            if(current->val < val){
                if(current->right != NULL){
                    current = current->right;
                }
                else{
                    current->right = new TreeNode(val);
                    break;
                }
            }
            else{
                if(current->left != NULL){
                    current = current->left;
                }
                else{
                    current->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};