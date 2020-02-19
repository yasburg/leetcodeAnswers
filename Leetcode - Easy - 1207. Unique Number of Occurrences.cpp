class Solution {
public:
    struct numCount{
        int num;
        int count;
    };
    
    int findLoc(vector<numCount>& vec, int num){
        for(int i = 0; i < vec.size(); i++){
            if(vec[i].num == num){
                return i;
            }
        }
        return -1;
    }
    
    bool checkUniqueness(vector<numCount>& vec){
        vector<int> counts;
        for(numCount x : vec){
            counts.push_back(x.count);
        }
        
        set<int> s(counts.begin(), counts.end());
        return (counts.size() == s.size());
    }
    
    bool uniqueOccurrences(vector<int>& arr) {
        vector<numCount> countVector;
        
        for(int i = 0; i < arr.size(); i++){
            int curNum = arr[i];
            int curIndex = findLoc(countVector, curNum); 
            if(curIndex == -1){
                numCount temp;
                temp.num = curNum;
                temp.count = 1;
                countVector.push_back(temp);
            }
            else{
                countVector[curIndex].count++;
            }
        }
        return checkUniqueness(countVector);
    }
};