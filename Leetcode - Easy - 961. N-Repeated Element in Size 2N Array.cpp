class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,bool> hashTable;
        for(int i = 0; i < A.size(); i++){
            if(hashTable.find(A[i]) == hashTable.end()){
                hashTable.insert({A[i],true});
            }
            else{
                return A[i];
            }
        }
        return 0;
    }
};