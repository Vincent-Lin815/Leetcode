class Solution {
public:
    static bool cmp(vector<int> v1, vector<int> v2){
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int output = 0;
        
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        
        for(int i = 0; i < boxTypes.size(); i++){
            if(truckSize - boxTypes[i][0] > 0){
                truckSize-=boxTypes[i][0];
                output+=boxTypes[i][0]*boxTypes[i][1];
            }else{
                output+=truckSize*boxTypes[i][1];
                break;
            }
        }
        
        return output;
    }
};
