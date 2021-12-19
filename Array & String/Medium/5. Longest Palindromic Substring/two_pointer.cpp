class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        
        int maxlen = 1, max_left = 0;
        
        for(int mid = 0; mid < s.size(); mid++){
            int left = mid, right = mid;
            
            while(right < s.size()-1 && s[right] == s[right+1]) right++;
            
            while(left > 0 && right < s.size()-1 && s[left-1] == s[right+1]){
                left--;
                right++;
            }
            
            if(right-left+1 > maxlen){
                maxlen = right-left+1;
                max_left = left;
            }
        }
        
        return s.substr(max_left, maxlen);
    }
};
