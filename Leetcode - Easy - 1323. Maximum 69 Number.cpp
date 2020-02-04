class Solution {
public:
    int maximum69Number (int num) {
        string strNum = to_string(num);
        
        for(char& x : strNum){
            if(x != '9'){
                x = '9';
                break;
            }
        }
        return stoi(strNum);
    }
};