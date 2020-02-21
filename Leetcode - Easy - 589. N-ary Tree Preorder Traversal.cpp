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
    vector<int> preorder(Node* root) {
                vector<int> result;
        if(root != NULL){
            result.push_back(root->val); 
            
            vector<int> fromChildren;
            
            for(Node* x : root->children){
                
                vector<int> temp = preorder(x);
                for(int y : temp){
                    fromChildren.push_back(y);
                }
                
            }
            for(int x : fromChildren){
                result.push_back(x);
            }

        }
        
        return result;
    }
};