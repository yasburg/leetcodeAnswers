class Solution {
public:
    string freqAlphabets(string s) {
        string result = "";
        
        for(int i = 0; i < s.length(); i++){
            
            if( 48 <= s[i] && s[i] <=57 ){
                result.push_back('a' + ( s[i] - '1'));
            }
            else{
                result.pop_back();
                result.pop_back();
                string temp = "";
                temp += s[i-2];
                temp += s[i-1];
                int tempInt = stoi(temp);
                result.push_back( tempInt + 'a' - 1);
            }
        }
        return result;
    }
};