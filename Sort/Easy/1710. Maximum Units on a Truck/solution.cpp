// The constraint that "boxes per unit" will be max 1000 allows us to use 1000 buckets to sort by boxes per unit.
// Ie., we can create an array where the indices represent 0 boxes per unit, 1 boxes per unit, 2 boxes per unit, 3 boxes per unit, ... 1000 boxes per unit. And the buckets[i] will represent the number of boxes at each index.

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<int> buckets(1001, -1);
        
        int space_remaining_boxes = truckSize;
        int units_loaded = 0;
        
        for (int i = 0; i < boxTypes.size(); ++i) {
            if (buckets[ boxTypes[i][1] ] == -1) {
                buckets[ boxTypes[i][1] ] = boxTypes[i][0];
            } else {
                buckets[ boxTypes[i][1] ] += boxTypes[i][0];
            }
        }
        
        for (int i = 1000; i >= 0; --i) {
            if (buckets[i] == -1) continue;
            
            if (buckets[i] > space_remaining_boxes) {
                units_loaded += space_remaining_boxes*i;
                return units_loaded;
            } else {
                units_loaded += buckets[i]*i; 
                space_remaining_boxes -= buckets[i];
            }
        }
        
        return units_loaded;
    }
};
