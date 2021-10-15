class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for(int i = 0; i < strs[0].size(); ++i){
            for(int j = 0; j < strs.size(); ++j){
                if(strs[j][i] == strs[0][i]){
                    if(j == strs.size()-1){
                        prefix += strs[0][i];
                    }else{
                        continue;
                    }
                }else{
                    return prefix;
                }
            }
        }
        return prefix;
    }
};
