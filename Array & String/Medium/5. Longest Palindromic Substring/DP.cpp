class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 1, start = 0, n = s.size();
        int DP_table[n][n];
        
        // 'a', 'b', 'c'...... is Palindrome
        for(int i = 0; i < n; i++) DP_table[i][i] = 1;
        
        // 'aa', 'bb', 'cc'...... is Palindrome
        for(int j = 0; j < n-1; j++){
            if(s[j] == s[j+1]){
                DP_table[j][j+1] = 1;
                max_len = 2;
                start = j;
            }else{
                DP_table[j][j+1] = 0;
            }
        }
        
        // a"bab"a is a Palindrome if 
        // 1) s[start] == start[end] 
        // 2) DP_table[start+1][end-1] == 1 (bab is Palindrome)
        for(int len = 3; len <= n; len++){
            for(int st = 0; st < n-len+1; st++){
                int e = len+st-1;
                if(s[st] == s[e] && DP_table[st+1][e-1] == 1){
                    DP_table[st][e] = 1;
                    if(len > max_len){
                        max_len = len;
                        start = st;
                    }
                }else{
                    DP_table[st][e] = 0;
                }
            }
        }
        
        return s.substr(start, max_len);
    }
};
