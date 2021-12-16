class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        
        while(columnNumber != 0){
            ans  = (char)((columnNumber-1) % 26 + 'A') + ans;
            columnNumber = (columnNumber-1)/26;
        }
        
        return ans;
    }
};
