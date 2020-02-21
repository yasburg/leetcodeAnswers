class Solution {
public:
    struct block{
        int index;
        int num;
    };
    
    static bool sortMethod(block s1, block s2){
        if(s1.num == s2.num){//to fix the order problem in some cases JUST TO FIT THE EXACT RESULTS NOR
            return s1.index < s2.index;
        }
        return s1.num < s2.num;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<block> blocks;
        vector<int> results;
        
        //creating a vector of blocks with soldiers and id s stored in them
        for(int i = 0; i < mat.size(); i++){
            block curBlock;
            curBlock.index = i;
            curBlock.num = 0;
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1){
                    curBlock.num++;
                }
            }
            cout << curBlock.index << " " << curBlock.num << endl;
            blocks.push_back(curBlock);
        }    
        
        //now we will sort it based on the soldier count (num in struct)
        sort(blocks.begin(), blocks.end(), sortMethod);
        for(int i = 0; i < k; i++){
            results.push_back(blocks[i].index);
        }
        
        return results;
    }
};