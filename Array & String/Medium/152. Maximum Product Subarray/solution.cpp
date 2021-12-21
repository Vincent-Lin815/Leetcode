class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left_product = 1, right_product = 1, _max = INT_MIN, n = nums.size();
        
        for(int i = 0; i < n; i++){
            left_product*=nums[i];
            right_product*=nums[n-1-i];
            _max = max(max(right_product, left_product), _max);
            if(left_product == 0) left_product = 1;
            if(right_product == 0) right_product = 1;
        }
        
        return _max;
    }
};
