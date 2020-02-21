class Solution {
public:
    
    int findFirstFit(vector<int>& A, int index, int r){
        for(int i = index+1; i < A.size(); i++){
            if(A[i] % 2 == r){
                return i;
            }
        }
        return -1;
    }
    
    vector<int> sortArrayByParityII(vector<int>& A) {
        sort(A.begin(), A.end());
        
        for(int i = 0; i < A.size(); i++){
            if(i % 2 == 0 && A[i] % 2 != 0){
                int nextEvenIndex = findFirstFit(A, i, 0);
                int curTemp = A[i];
                A[i] = A[nextEvenIndex];
                A[nextEvenIndex] = curTemp;
            }
            else if(i % 2 == 1 && A[i] % 2 != 1){
                int nextOddIndex = findFirstFit(A, i, 1);
                int curTemp = A[i];
                A[i] = A[nextOddIndex];
                A[nextOddIndex] = curTemp;    
            }
        }
        return A;
    }
};