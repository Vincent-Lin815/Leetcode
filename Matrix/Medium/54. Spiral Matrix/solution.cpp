class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        if(matrix.size() == 0) return ans;
        
        int action = 0;
        int start_row = 0, start_col = 0, end_row = matrix.size()-1, end_col = matrix[0].size()-1;
        
        while(start_row <= end_row && start_col <= end_col){
            switch(action){
                case 0:
                    for(int col = start_col; col <= end_col; col++){
                        ans.push_back(matrix[start_row][col]);
                    }
                    start_row++;
                    break;
                case 1:
                    for(int row = start_row; row <= end_row; row++){
                        ans.push_back(matrix[row][end_col]);
                    }
                    end_col--;
                    break;
                case 2:
                    for(int col = end_col; col >= start_col; col--){
                        ans.push_back(matrix[end_row][col]);
                    }
                    end_row--;
                    break;
                case 3:
                    for(int row = end_row; row >= start_row; row--){
                        ans.push_back(matrix[row][start_col]);
                    }
                    start_col++;
                    break;
            }
            
            action = (action+1)%4;
        }
        
        return ans;
    }
};
