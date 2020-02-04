class Solution {
public:
    string toLowerCase(string str) {
        
        for( char& x : str){
            if( 65 <= x && x <= 90){
                x = x + 32;
            }
        }
        
        return str;
    }
};