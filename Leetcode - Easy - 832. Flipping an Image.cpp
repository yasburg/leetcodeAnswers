class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& vec : A){
            for(int i = 0; i < vec.size()/2; i++){
                int temp = vec[i];
                //swapping and invertin at the same time with XOR operation
                vec[i] = vec[vec.size()-1-i] ^ 1;
                vec[vec.size()-1-i] = temp ^ 1;
            }
            if(vec.size() % 2 == 1){//we dont arrive at mid value because of the vec.size()/2
                vec[vec.size()/2] == 0 ? vec[vec.size()/2]++ : vec[vec.size()/2]--;
            }
        }
        return A;
    }
};