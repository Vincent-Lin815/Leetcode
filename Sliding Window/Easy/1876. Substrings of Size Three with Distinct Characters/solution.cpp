class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char, int> table;
        int count = 0;
        
        for(int i = 0; i < s.size(); i++){
            table[s[i]]++;
            
            if(i > 2 && --table[s[i-3]] == 0){
                table.erase(s[i-3]);
            }
            
            if(table.size() == 3){
                count++;
            }
        }
        return count;
    }
};
