class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> table(nums1.begin(), nums1.end());
        vector<int> result;

        for(auto elm:nums2){
            if(table.count(elm) != 0){
                result.push_back(elm);
                table.erase(elm);
            }
        }
        
        return result; 
    }
};
