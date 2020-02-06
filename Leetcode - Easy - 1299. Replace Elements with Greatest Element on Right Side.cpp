class Solution {
public:
    void findMaxOfRight(int& index, vector<int>& arr, int& maxIndex, int& max){
        max = arr[index+1];
        maxIndex = index+1;
        for(int i = 1; i < arr.size()-index; i++){
            if(arr[index+i] > max){
                max = arr[index + i];
                maxIndex = index + i; //saving this to change integers in between without repeating fingMaxOfRight() for each of them. To increase runtime.
            }
        }
    }
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 0){
            return arr;           
        } 
        else if(arr.size() == 1){
            arr[0] = -1;
            return arr;
        }
        else{
            int currentMaxIndex = 0;// normally it should be 1 but to pass the first if I made it 0 to trick the program
            int currentMax = arr[currentMaxIndex];
            for(int i = 0; i < arr.size()-1; i++){
                if(currentMaxIndex > i){
                    arr[i] = currentMax;
                }
                else{
                    findMaxOfRight(i, arr, currentMaxIndex, currentMax);
                    arr[i] = currentMax;
                }
            }
            arr[arr.size()-1] = -1;
        }
        return arr;
    }
};