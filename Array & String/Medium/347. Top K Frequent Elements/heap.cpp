class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> table;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        
        for(auto elm:nums){
            table[elm]++;
        }
        
        for(auto iter = table.begin(); iter != table.end(); iter++){
            pq.push({iter->second, iter->first});
            if(pq.size() > table.size()-k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        
        return ans;
    }
};
