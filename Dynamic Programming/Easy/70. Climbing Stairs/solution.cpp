class Solution {
public:
    int climbStairs(int n) {
        if(n < 3) return n;
        
        int stairs[n+1];
        stairs[0] = 0;
        stairs[1] = 1;
        stairs[2] = 2;
        
        for(int i = 3; i < n+1; i++){
            stairs[i] = stairs[i-1] + stairs[i-2];
        }
        
        return stairs[n];
    }
};
