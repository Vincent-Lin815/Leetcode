class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return check(s, t) && check(t, s);
    }
    
    bool check(string s, string t){
        unordered_map<char, char> table;
        
        for(int i = 0; i < s.size(); i++){
            if(table.find(s[i]) != table.end()){
                if(table[s[i]] != t[i]){
                    return false;
                }
            }else{
                table[s[i]] = t[i];
            }
        }
        return true;
    }
};
