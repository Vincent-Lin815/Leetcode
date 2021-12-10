// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans, left = 1, right = n;
        
        while(left <= right){
            int mid = left + (right-left)/2;
            
            if(isBadVersion(mid) == false){
                left = mid + 1;
            }else{
                if(mid == 1 || isBadVersion(mid-1) != true){
                    ans = mid;
                    break;
                }else{
                    right = mid - 1;
                }
            }
        }
        
        return ans;
    }
};
