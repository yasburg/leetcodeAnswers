class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> table;
        table.insert({'U',0});
        table.insert({'D',0});
        table.insert({'L',0});
        table.insert({'R',0});
        
        for(char ch : moves){
            table.find(ch)->second++;
        }
        
        if(table.find('U')->second == table.find('D')->second 
           && table.find('R')->second == table.find('L')->second ){
            return true;
        }
        
        return false;

    }
};