class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size(), j = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int special = 0; special <= n; special++){
            for(; j < n; j++){
                if(nums[j] >= special){
                    if((n-j)==special){
                        return special;
                    }else{
                        break;
                    }
                }
                cout << j << endl;
            }
        }
        
        return -1;
    }
};
