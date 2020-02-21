class Solution {
public:
    int heightChecker(vector<int>& heights) {
        /* Actually the optimal solution but question ask which heights are in the wrong position
        // Bad explanation unfortunately
        int swapCount = 0;
        
        for(int i = 0; i < heights.size()-1; i++){
            bool minChanged = false;
            int indexOfMin = i;
            int curMin = heights[i];
            for(int j = i+1; j < heights.size(); j++){
                if( heights[j] < curMin){
                    curMin = heights[j];
                    indexOfMin = j;
                    minChanged = true;
                    break;
                }
            }
            if(minChanged){
                swapCount++;
                int temp = heights[i];
                heights[i] = curMin;
                heights[indexOfMin] = temp;
            }
        }
        return swapCount;*/
        int counter = 0;
        vector<int> copy;
        
        for(int x : heights){
            copy.push_back(x);
        }
        sort(copy.begin(), copy.end());
        
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != copy[i]) counter++;
        }
        
        return counter;
    }
};