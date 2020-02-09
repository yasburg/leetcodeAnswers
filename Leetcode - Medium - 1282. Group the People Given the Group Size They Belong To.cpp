class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> hashTable;
        vector<vector<int>> results;
        
        for(int i = 0; i < groupSizes.size(); i++){
            int size = groupSizes[i];
            if(size == 1){
                vector<int> oneItemVec {i};
                results.push_back(oneItemVec);
                continue;
            }
            if(hashTable.find(size) == hashTable.end()){
                vector<int> sizeIndexHolder {i};
                hashTable.insert({size, sizeIndexHolder});
            }
            else{
                if(hashTable.find(size)->second.size() < size-1){
                    hashTable.find(size)->second.push_back(i);
                }
                else{
                    hashTable.find(size)->second.push_back(i);
                    results.push_back(hashTable.find(size)->second);
                    hashTable.erase(size);
                }
            }
        }
        return results;
    }
};