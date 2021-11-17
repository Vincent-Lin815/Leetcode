class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> table1;
        unordered_map<string, char> table2;
        istringstream stream(s);
        string substr;
        int i = 0; 
        
        while(stream >> substr){
            if(table1.find(pattern[i]) != table1.end()){
                if(table1[pattern[i]] != substr) return false;
            }
            
            if(table2.find(substr) != table2.end()){
                if(table2[substr] != pattern[i]) return false;
            }
            
            table1[pattern[i]] = substr;
            table2[substr] = pattern[i];
            i++;
        }
        
        if(i != pattern.size()) return false;
        
        return true;
    }
};
