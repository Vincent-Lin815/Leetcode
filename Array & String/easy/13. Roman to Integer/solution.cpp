class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int len = s.length();
        for(int i = 0; i < len; i++){
            if(i < (len-1) && romanCharToInt(s[i]) < romanCharToInt(s[i+1])){
                sum -= romanCharToInt(s[i]);
            }else{
                sum += romanCharToInt(s[i]);
            };
        };
        return sum;
    };
    
    int romanCharToInt(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        };
    }; 
};
