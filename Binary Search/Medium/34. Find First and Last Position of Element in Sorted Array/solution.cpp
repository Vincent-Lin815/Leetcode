class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1, -1};
        int left = 0, right = nums.size()-1;
        cout << nums[right+1] << endl;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] > target){
                right = mid - 1;
            }else if(nums[mid] < target){
                left = mid + 1;
            }else{
                if(mid == 0 || nums[mid] != nums[mid-1]){
                    ans[0] = mid;
                    break;
                }else{
                    right = mid - 1;
                }
            }
        }
        
        if(ans[0] == -1) return ans;
        
        left = 0, right = nums.size()-1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] > target){
                right = mid - 1;
            }else if(nums[mid] < target){
                left = mid + 1;
            }else{
                if(mid == nums.size()-1 || nums[mid] != nums[mid+1]){
                    ans[1] = mid;
                    break;
                }else{
                    left = mid + 1;
                }
            }
        }

        return ans;
    }
};
