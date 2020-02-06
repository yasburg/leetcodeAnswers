class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codeHolder {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,bool> strTable;
        int counter = 0;
        
        for(string word : words){
            string wordCode = "";
            for(char letter : word){
                wordCode += codeHolder[letter-'a'];
            }
            if(strTable.find(wordCode) == strTable.end()){ // means we found it in table
                strTable.insert({wordCode,true});
                counter++;
            }
        }
        return counter;
    }
};