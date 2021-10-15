class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, current_sum = 0;
        for(auto i : nums){
            current_sum += i;
            ans = max(current_sum, ans);
            current_sum = max(current_sum, 0);
        }
        return ans;
    }
};
