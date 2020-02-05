/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Using code from: https://leetcode.com/problems/deepest-leaves-sum/discuss/494210/10000-fast-in-memory-and-fast-execution-with-approach-dfsbfs-comparison
class Solution {
public:
    void dfs(TreeNode * root, int curDepth, int& largestDepth, int& sum){
        if(root == NULL) return;
        if(curDepth == largestDepth){
            sum += root->val;
        }
        if(curDepth > largestDepth){
            sum = root->val;
            largestDepth = curDepth;
        }
        dfs(root->left, curDepth+1, largestDepth, sum);
        dfs(root->right, curDepth+1, largestDepth, sum);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int depth = 0, largestDepth = 1, sum = 0;
        dfs(root, depth, largestDepth, sum);
        return sum;
    }
};