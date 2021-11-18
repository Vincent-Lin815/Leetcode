class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> table;
        vector<int> result;
        
        for(auto elm:nums1){
            table[elm]++;
        }
        
        for(auto elm:nums2){
            if(table[elm] > 0){
                result.push_back(elm);
                table[elm]--;
            }
        }
        return result;
    }
};
