class Solution {
public:
    string breakPalindrome(string palindrome) {
        int palLength = palindrome.length();
        int midPoint = palLength / 2;
        
        if (palLength == 1 || palLength == 0){
            return ""; 
        }
        else{
            
            for ( int i = 0; i < palLength; i++){
                if( palindrome[i] != 'a' && i != midPoint){
                    palindrome[i] = 'a';
                    break;
                }
                else if ( i == midPoint ){
                    palindrome[palLength - 1] = 'b';
                    break;
                }
            }
        }
        return palindrome;    
    }
};