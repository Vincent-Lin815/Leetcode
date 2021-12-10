// 0 0000
// 1 0001
// 2 0010
// 3 0011
// 4 0100
// 5 0101
// 6 0110
// 7 0111
// 8 1000
// 9 1001

// First we do >>1, for example:  1001 -> 0100. Since we already know the previous count of '1', we only need to decide whether we should add 1 by doing i&1 to see if the missing bit is a '1'.

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;
        
        for(int i = 1; i <= n; i++){
            ans[i] = ans[i >> 1] + (i & 1);
        }
        
        return ans;
    }
};
