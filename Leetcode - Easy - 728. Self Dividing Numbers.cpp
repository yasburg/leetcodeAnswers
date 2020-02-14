class Solution {
public:
    bool isSelfDividing(int num){
        int temp = num;
        vector<int> digits;
        while(temp != 0){
            int lastDigit = temp % 10;
            if(lastDigit == 0){ 
                return false;
            }
            if(num % lastDigit != 0){
                return false;
            }    
            temp /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> selfVec;
        
        for(int i = left; i <= right; i++){
            if(isSelfDividing(i)){
                selfVec.push_back(i);
            }
        }
        
        return selfVec;
    }
};