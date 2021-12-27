class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        
        if(n == 0) return matrix;
        
        int action = 0, count = 1;
        int start_row = 0, start_col = 0, end_row = n-1, end_col = n-1;
        
        while(start_row <= end_row && start_col <= end_col){
            switch(action){
                case 0:
                    for(int col = start_col; col <= end_col; col++){
                        matrix[start_row][col] = count;
                        count++;
                    }
                    start_row++;
                    break;
                    
                case 1:
                    for(int row = start_row; row <= end_row; row++){
                        matrix[row][end_col] = count;
                        count++;
                    }
                    end_col--;
                    break;
                    
                case 2:
                    for(int col = end_col; col >= start_col; col--){
                        matrix[end_row][col] = count;
                        count++;
                    }
                    end_row--;
                    break;
                    
                case 3:
                    for(int row = end_row; row >= start_row; row--){
                        matrix[row][start_col] = count;
                        count++;
                    }
                    start_col++;
                    break;
            }
            
            action = (action+1)%4;
        }
        
        return matrix;
    }
};
