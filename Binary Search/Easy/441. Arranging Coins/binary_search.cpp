class Solution {
public:
    int arrangeCoins(int n) {
        int ans, left = 1, right = n;
        
        while(left <= right){
            long long mid = left + (right - left)/2;
            long long total = mid*(mid+1)/2;
            
            if(total > n){
                right = mid - 1;
                ans = right;
            }else if(total < n){
                left = mid + 1;
            }else{
                ans = mid;
                break;
            }
        }
        
        return ans;
    }
};
