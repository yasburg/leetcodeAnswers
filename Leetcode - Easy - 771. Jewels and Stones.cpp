class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,bool> jewels; 
        int counter = 0;
        
        for( char& x : J ){
           jewels.insert({x, true}); 
        }
        
        for( char& x : S ){
            if(jewels.find(x) != jewels.end()){
                counter++;
            }
        }
        return counter;        
    }
};