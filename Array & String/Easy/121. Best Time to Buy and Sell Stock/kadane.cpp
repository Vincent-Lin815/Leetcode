class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN, current_sum = 0;

        for(int j = 0; j < prices.size()-1; j++){
            current_sum += (prices[j+1] - prices[j]);
            ans = max(current_sum, ans);
            current_sum = max(current_sum, 0);
        }
        
        if(ans < 0){
            return 0;
        }else{
            return ans;
        }
    }
};
