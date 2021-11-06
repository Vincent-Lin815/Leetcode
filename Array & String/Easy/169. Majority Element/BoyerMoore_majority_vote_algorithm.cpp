class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, res = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == res){
                count++;
            }else{
                if(count > 0){
                    count--;
                }else{
                    res = nums[i];
                }
            }
        }
        return res;
    }
};
