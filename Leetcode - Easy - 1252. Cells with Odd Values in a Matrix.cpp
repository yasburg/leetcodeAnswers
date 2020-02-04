class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
        //For 2D vectors: http://www-h.eng.cam.ac.uk/help/tpl/languages/C++/vectormemory.html
        vector<int> rowVector(m,0);
        vector<vector<int>> resultingMatrix(n,rowVector);
        int oddCounter = 0;
        
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < m; j++){
                resultingMatrix[indices[i][0]][j]++;
            }
            for(int k = 0; k < n; k++){
                resultingMatrix[k][indices[i][1]]++;
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(resultingMatrix[i][j] % 2 == 1){
                    oddCounter++;
                }
            }
        }
        return oddCounter;
    }
};