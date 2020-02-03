class Solution {
public:
    string defangIPaddr(string address) {
        string newAddress = "";
        for (char x : address){
            if (x != '.'){
                newAddress += x;
            }
            else{
                newAddress += "[.]";
            }
        }
        return newAddress;
    }
};