class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> table;
        int n = nums.size();
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            table[nums[i]]++;
        }
        
        for(auto elm:table){
            if(elm.second > n/3) ans.push_back(elm.first);
        }
        
        return ans;
    }
};
