class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1, s = m+n-1;
        
        while(j >= 0){
            if(i >=0 && nums1[i] > nums2[j]){
                nums1[s] = nums1[i];
                s--;
                i--;
            }else{
                nums1[s] = nums2[j];
                s--;
                j--;
            }
        }
    }
};
