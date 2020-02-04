class Solution {
public:
    int maxMoveCalculator(int& x1, int& y1, int& x2, int& y2){
        return max(abs(x2-x1),abs(y2-y1));
    }
    
    int secondCalculator(vector<int>& point1, vector<int>& point2){
        return maxMoveCalculator(point1[0],point1[1],point2[0],point2[1]);
    }
    
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int totalSecond = 0;
        
        if(points.size() <= 1){
            return totalSecond;
        }
        
        for(int i = 0; i < points.size()-1; i++){
            totalSecond += secondCalculator(points[i], points[i+1]);
        }
        
        return totalSecond;
    }
};