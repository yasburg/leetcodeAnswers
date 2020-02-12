class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        for(int i = 0; i < A.size(); i++){
            int currentInt = A[i];
            if(currentInt % 2 == 0){
                A.insert(A.begin(),currentInt);
                A.erase(A.begin()+i+1);
            }
        }
        return A;
    }
};