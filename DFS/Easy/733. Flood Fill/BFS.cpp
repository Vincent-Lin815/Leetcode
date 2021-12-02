// BFS

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        
        int oldColor = image[sr][sc];
        queue<pair<int, int>> togo;
        togo.push({sr, sc});
        
        while(!togo.empty()){
            int r = togo.front().first;
            int c = togo.front().second;
            togo.pop();
            image[r][c] = newColor;
            
            if(r-1 >= 0 && image[r-1][c] == oldColor) togo.push({r-1, c});
            if(r+1 < image.size() && image[r+1][c] == oldColor) togo.push({r+1, c});
            if(c-1 >= 0 && image[r][c-1] == oldColor) togo.push({r, c-1});
            if(c+1 < image[0].size() && image[r][c+1] == oldColor) togo.push({r, c+1});
        }
        
        return image;
    }
};
