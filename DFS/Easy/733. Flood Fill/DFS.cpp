// There are three things that you need to consider once you have identified that a question can be sovled using DFS

// 1.The base case ( return condition )
// 2.Mark that node as visited
// 3.Given that I am at a particular node what operations do I need to perform

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] != newColor){
            DFS(image, sr, sc, image[sr][sc], newColor);
        }
        return image;
    }
    
    void DFS(vector<vector<int>> &image, int sr, int sc, int oldColor, int newColor){
        int row = image.size(), col = image[0].size();
        
        if(sr < 0 || sc < 0 || sr >= row || sc >= col || image[sr][sc] != oldColor) return;
        
        image[sr][sc] = newColor;
        
        DFS(image, sr+1, sc, oldColor, newColor);
        DFS(image, sr-1, sc, oldColor, newColor);
        DFS(image, sr, sc+1, oldColor, newColor);
        DFS(image, sr, sc-1, oldColor, newColor);
    }
};
