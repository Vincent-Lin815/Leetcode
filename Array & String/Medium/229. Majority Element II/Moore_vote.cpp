class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 1, candidate2 = 0, cnt1 = 0, cnt2 = 0, n = nums.size();
        vector<int> ans;
        
        for(auto num:nums){
            if(num == candidate1){
                cnt1++;
            }else if(num == candidate2){
                cnt2++;
            }else if(cnt1 == 0){
                candidate1 = num;
                cnt1++;
            }else if(cnt2 == 0){
                candidate2 = num;
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = 0, cnt2 = 0;
        
        for(auto num:nums){
            if(num == candidate1) cnt1++;
            if(num == candidate2) cnt2++;
        }
        
        if(cnt1 > n/3) ans.push_back(candidate1);
        if(cnt2 > n/3) ans.push_back(candidate2);
        
        return ans;
    }
};
