class Solution {
public:
    int balancedStringSplit(string s) {
        char firstChar = s[0];
        stack<char> charHolder;
        int counter = 0;

        for(char x : s){
            
            if( !charHolder.empty() && x != firstChar ){
                charHolder.pop();
                if(charHolder.empty()){
                    counter++;        
                }
            }
            else{
                charHolder.push(x);
                firstChar = x;
            }
            
        }
        return counter;
    }
};