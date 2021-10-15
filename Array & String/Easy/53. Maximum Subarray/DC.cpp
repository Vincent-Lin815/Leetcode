class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return DivideAndConquer(nums, 0, nums.size()-1);
    }
    
    int DivideAndConquer(vector<int>& nums, int left, int right){
        // Stop condition
        if(left == right){
            return nums[left];
        }
        
        // Divide
        int m = (left+right)/2, current_max_left = INT_MIN, current_max_right = INT_MIN;
        int left_max = DivideAndConquer(nums, left, m);
        int right_max = DivideAndConquer(nums, m+1, right);
        
        // Conquer
        for(int i = m, sum = 0; i >= left; i--){
            sum += nums[i];
            current_max_left = max(sum, current_max_left);
        }
        for(int j = m+1, sum = 0; j <= right; j++){
            sum += nums[j];
            current_max_right = max(sum, current_max_right);
        }
        
        // Return max(left_sum, right_sum, cross_sum)
        return max(max(left_max, right_max), current_max_left + current_max_right);
    }
};
