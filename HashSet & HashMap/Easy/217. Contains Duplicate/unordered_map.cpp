class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> table;
        
        for(int i = 0; i < nums.size(); i++){
            if(table.find(nums[i]) != table.end()){
                return true;
            }else{
                table[nums[i]] = 0;
            }
        }
        return false;
    }
};
