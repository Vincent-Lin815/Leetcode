//Floyd's cycle detection algorithm is a pointer algorithm that uses only two pointers, which move through the sequence at different speeds. 
//Obviously, if there is a loop, they will meet in the loop. It is also called the "tortoise and the hare algorithm"

class Solution {
public:
    int next(int n){
        int sum = 0;
        
        while(n != 0){
            sum += pow(n%10, 2);
            n = n/10;
        }
        
        return sum;
    }
    
    bool isHappy(int n) {        
        int slow = next(n);
        int fast = next(next(n));
        
        while(slow != fast){
            slow = next(slow);
            fast = next(next(fast));
            cout<<slow<<endl;
            cout<<fast<<endl;
        }
        
        return fast == 1;
    }
};
