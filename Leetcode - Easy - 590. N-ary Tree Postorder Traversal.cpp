/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    //used to form the code: https://leetcode.com/problems/n-ary-tree-postorder-traversal/discuss/141594/Python-C%2B%2B-and-Java-Recursive-and-Iterative-Solution
    vector<int> postorder(Node* root) {
        vector<int> result;
        if(root != NULL){
    
            vector<int> fromChildren;
            
            for(Node* x : root->children){
                
                vector<int> temp = postorder(x);
                for(int y : temp){
                    fromChildren.push_back(y);
                }
                
            }
            for(int x : fromChildren){
                result.push_back(x);
            }
            result.push_back(root->val);       
        }
        
        return result;
    }
};