class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table;
        
        for(int i = 0; i < nums.size(); i++){
            if(table.find(target-nums[i]) != table.end()){
                return vector<int> {table[target-nums[i]], i};
            }
            table[nums[i]] = i;
        }
        return vector<int> {};
    }
};
