class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        
        for(int i = 0; i < nums.size();){
            if(nums[i] == val){
                nums.erase(nums.begin()+i);
                count++;
            }else{
                i++;
            }
        }
        return nums.size();
    }
};
