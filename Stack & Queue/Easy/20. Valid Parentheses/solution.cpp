class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        
        for(char elm:s){
            if(brackets.empty() || elm == '(' || elm == '[' || elm == '{'){
                brackets.push(elm);
            }else{
                if(elm == ')' && brackets.top() != '(') return false;
                else if (elm == ']' && brackets.top() != '[') return false;
                else if (elm == '}' && brackets.top() != '{') return false;
                else brackets.pop();
            }
        }
        return brackets.empty();
        
    }
};
