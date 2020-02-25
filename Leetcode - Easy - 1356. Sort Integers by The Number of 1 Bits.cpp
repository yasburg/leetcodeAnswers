class Solution {
public:
    struct numWithBits{
        int number;
        int numOfBits;
    };
    
    int countBits(int num){
        int counter=0;
        while(num){
            counter += num & 1;
            num >>= 1;
        }
        return counter;
    }
    
    static bool sortMethod(numWithBits a, numWithBits b){
        if(a.numOfBits == b.numOfBits){
            return a.number < b.number;
        }
        return a.numOfBits < b.numOfBits;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        vector<numWithBits> structVec;
        for(int x : arr){
            numWithBits temp;
            temp.number = x;
            temp.numOfBits = countBits(x);
            structVec.push_back(temp);
        }
        
        sort(structVec.begin(), structVec.end(), sortMethod);
        vector<int> result;
        for(numWithBits x : structVec){
            result.push_back(x.number);
        }
        
        return result;
    }
};