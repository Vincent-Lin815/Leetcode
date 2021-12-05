class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftsum = 0;
        for(int elm:nums) sum+=elm;
        
        for(int i = 0; i < nums.size(); i++){
            if(leftsum == sum - leftsum - nums[i]){
                return i;
            }else{
                leftsum+=nums[i];
            }
        }
        return -1;
    }
};
