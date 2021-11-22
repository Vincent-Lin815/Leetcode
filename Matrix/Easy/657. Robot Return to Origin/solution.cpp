class Solution {
public:
    bool judgeCircle(string moves) {
        int l = 0, r = 0, u = 0, d = 0;
        
        for(char elm:moves){
            if(elm == 'L'){
                l++;
            }else if(elm == 'R'){
                r++;
            }else if(elm == 'U'){
                u++;
            }else if(elm == 'D'){
                d++;
            }
        }
        
        return (l == r && u == d);
    }
};
