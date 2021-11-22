class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c){
            return mat;
        }
        
        vector<vector<int>> output(r, vector<int>(c));
        int row = mat.size(), col = mat[0].size(), total = row*col;
        
        for(int i = 0; i < total; i++){
            output[i/c][i%c] = mat[i/col][i%col];
        }
        
        return output;
    }
};
