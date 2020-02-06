class Solution {
public:
    // Had help from: https://leetcode.com/problems/remove-outermost-parentheses/discuss/270022/JavaC%2B%2BPython-Count-Opened-Parenthesis
    string removeOuterParentheses(string S) {
        int counter = 0;
        string result = "";
        for(int i = 0; i < S.length()-1;i++){
            if(S[i] == '('){
                if(counter > 0){
                    result += S[i];
                }
                counter++;
            }
            if (S[i] == ')'){
                if(counter > 1){
                    result += S[i];
                }
                counter--;
            }
        }
        return result;
    }
};