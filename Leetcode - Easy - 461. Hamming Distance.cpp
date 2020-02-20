class Solution {
public:
    int hammingDistance(int x, int y) {
        int hDist = 0;
        x = x ^ y;
        
        while(x != 0){
            if(x % 2 == 1){
                hDist++;
            }    
            x = x >> 1;
        }
        return hDist;
    }
};