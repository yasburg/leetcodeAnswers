class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        
        if(n % 2 == 0){
            int startingValue = -n+1;
            for(int i = 0; i < n; i++){
                result.push_back(startingValue);
                startingValue += 2;
            }
        }
        else{
            int startingValue = -n/2;
            for(int i = 0; i < n;i++){
                result.push_back(startingValue++);
            }  
        }
        return result;
    }
};