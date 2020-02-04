class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        for ( int i = 0; i < nums.size(); i = i+2){
            for ( int j = 0; j < nums.at(i); j++){
                result.push_back(nums.at(i+1));
            }
        }
        return result;                                 
    }
};