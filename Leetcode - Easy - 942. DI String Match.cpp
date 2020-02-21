class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> result;
        int incVal = 0; //increasing value
        int decVal = S.length();
        
        for(int i = 0; i < S.length(); i++){
            if(S[i] == 'I'){
                result.push_back(incVal);
                incVal++;
            }    
            else{
                result.push_back(decVal);
                decVal--;
            }
        }
        result.push_back(decVal);
        return result;
    }
};