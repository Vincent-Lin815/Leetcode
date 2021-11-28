class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        int cnt = 0;
        
        sort(expected.begin(), expected.end());
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != expected[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
