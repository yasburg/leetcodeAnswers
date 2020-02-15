class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int& x : A){
            x *= x;
        }
        sort(A.begin(),A.end());
        return A;
    }
};