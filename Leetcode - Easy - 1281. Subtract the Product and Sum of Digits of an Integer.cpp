class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> vec;
        int product = 1,sum = 0;
        
        while (n != 0){
            vec.push_back(n%10);
            n /= 10;
        }
        
        for(auto x : vec){
            product *= x;
            sum += x;
        }
        
        return product - sum;
    }
};