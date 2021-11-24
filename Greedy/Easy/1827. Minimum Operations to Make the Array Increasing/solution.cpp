class Solution {
public:
    int minOperations(vector<int>& nums) {
        int curr = nums[0], result = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= curr){
                result += (curr-nums[i]+1);
                curr = curr+1;
            }else{
                curr = nums[i];                  
            }
        }
        
        return result;
    }
};
