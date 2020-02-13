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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        // O(n) solution, Changed the solution here: https://leetcode.com/problems/maximum-binary-tree/discuss/106146/c-on-solution
        stack<TreeNode*> nodeStk; //decreasin node stack - they are linked in ordered way
        
        for(int i = 0; i < nums.size(); i++){
            TreeNode* cur = new TreeNode(nums[i]);
            while(!nodeStk.empty() && nodeStk.top()->val < nums[i]){
                cur->left = nodeStk.top();
                nodeStk.pop();
            }
            if (!nodeStk.empty())
                nodeStk.top()->right = cur;
            nodeStk.push(cur);
        }
        TreeNode* max;
        while(!nodeStk.empty()){
            max = nodeStk.top();
            nodeStk.pop();
        }
        return max;
    }
};