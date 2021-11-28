class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        
        for(int i = 0; i < nums.size(); i++){
            table[nums[i]]++;
            
            if(i > k){
                table[nums[i-k-1]]--;
            }
            
            if(table[nums[i]] > 1){
                return true;
            }
        }
        
        return false;
    }
};
