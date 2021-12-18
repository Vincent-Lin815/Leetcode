class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        
        for(auto elm : s){
            ans^=elm;
        }
        
        for(auto elm : t){
            ans^=elm;
        }
        
        return ans;
    }
};
