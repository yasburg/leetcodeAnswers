class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter = 0;
        for (auto x : nums){
            int digitCounter = 0;
            //https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/
            for ( int i = 0; x != 0;i++){
                x = x / 10;
                digitCounter++;
            }
            if ( digitCounter % 2 == 0){
                counter++;
            }
            
        }
        return counter;
    }
};