// Since the majority element appears more than n / 2 times, the n / 2-th element in the sorted nums must be the majority element.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());
        return nums[nums.size() / 2];
    }
};
