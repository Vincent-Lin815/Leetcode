class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max_sum = nums[0];
        int score = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                score = nums[i];
            }else{
                score+=nums[i];
            }
            max_sum = max(score, max_sum);
        }
        
        return max_sum;
    }
};
