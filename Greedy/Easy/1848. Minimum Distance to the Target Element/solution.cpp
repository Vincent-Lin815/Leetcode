class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {  
        for(int i = 0; i < nums.size(); i++){
            if((start-i) >= 0 && nums[start-i] == target){
                return i;
            }

            if((start+i) <= nums.size()-1 && nums[start+i] == target){
                return i;
            }
        }  
        return 0;
    }
};
