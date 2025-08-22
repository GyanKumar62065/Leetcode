class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int minI = m, minJ = n, maxI = -1, maxJ = -1;
        for(int i =0; i < m; i++){
            for(int j =0; j < n; j++){
                if(grid[i][j]){
                    minI = min(minI, i);
                    minJ = min(minJ, j);
                    maxI = max(maxI, i);
                    maxJ = max(maxJ, j);
                }
            }
        }

        return (maxI - minI + 1) * (maxJ - minJ + 1);
    }
};