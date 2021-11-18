class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> table;
        int result = INT_MAX;
        
        for(int i = 0; i < s.size(); i++){
            if(table.find(s[i]) != table.end()){
                table[s[i]] = INT_MAX; 
            }else{
                table[s[i]] = i;
            }
        }
        
        for(auto elm:table){
            if(elm.second < result){
                result = elm.second;
            }
        }
        
        return (result == INT_MAX) ? -1 : result;
    }
};
