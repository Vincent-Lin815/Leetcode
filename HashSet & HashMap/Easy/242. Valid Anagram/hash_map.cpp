class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char, int> table;
        
        for(int i = 0; i < s.size(); i++){
            if(table.find(s[i]) != table.end()){
                table[s[i]]++;
            }else{
                table[s[i]] = 1;
            }
        }

        for(int j = 0; j < t.size(); j++){
            if(table[t[j]] == 0){
                return false;
            }else{
                table[t[j]]--;
            }
        }
        
        return true;
    }
};
