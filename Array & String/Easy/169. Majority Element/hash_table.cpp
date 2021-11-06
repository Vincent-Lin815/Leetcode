class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> dict;
        int n = nums.size();
        
        for(int i : nums){
            ++dict[i];
            if(dict[i] > n/2){
                return i;
            }
        }
        return 0;
    }
};
