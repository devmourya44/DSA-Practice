// #include <vector>
// #include <queue>

// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//         if (image[sr][sc] == newColor) return image; // If the new color is the same, 
//                                                     //no need to change anything.
        
//         int oldColor = image[sr][sc];
//         queue<pair<int, int>> q;
//         q.push({sr, sc});
        
//         while (!q.empty()) {
//             int r = q.front().first
//             int c = q.front().second;
//             q.pop();
//             image[r][c] = newColor; // Change the color to the new color
            
//             // Check all four directions
//             int dr[] = {1, -1, 0, 0};
//             int dc[] = {0, 0, 1, -1};
            
//             for (int i = 0; i < 4; i++) {
//                 int nr = r + dr[i];
//                 int nc = c + dc[i];
//                 if (nr >= 0 && nr < image.size() && nc >= 0 && nc < image[0].size() && image[nr][nc] == oldColor) {
//                     q.push({nr, nc});
//                 }
//             }
//         }
        
//         return image;
//     }
// };



#include <vector>

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor) return image; // If the new color is the same, no need to change anything.
        
        int oldColor = image[sr][sc];
        dfs(image, sr, sc, oldColor, newColor);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        
        image[r][c] = newColor; // Change the color to the new color
        
        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < image.size() && nc >= 0 && nc < image[0].size() && image[nr][nc] == oldColor) {
                dfs(image, nr, nc, oldColor, newColor);
            }
        }
    }
};


