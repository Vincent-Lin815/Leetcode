class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        
        string str = countAndSay(n-1);
        
        int cnt = 1;
        string ans = "";
        
        for(int i = 0; i < str.size(); i++){
            if(str[i] != str[i+1]){
                ans+=(to_string(cnt) + str[i]);
                cnt = 1;
            }else{
                cnt++;
            }
        }
        
        return ans;
    }
};
