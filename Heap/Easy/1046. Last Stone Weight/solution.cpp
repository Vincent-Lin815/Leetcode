class Solution {
public:
    priority_queue<int> pq;
    
    int lastStoneWeight(vector<int>& stones) {
        for(auto elm:stones){
            pq.push(elm);
        }
        
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            
            if(a != b){
                pq.push(a-b);
            }
        }
        
        return pq.empty() ? 0 : pq.top();
    }
};
